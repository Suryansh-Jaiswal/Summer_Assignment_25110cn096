#include<stdio.h>
int main()
{
    int num,i,factor,count,largest=0;
    printf("Enter the number :");
    scanf("%d",&num);
    for(factor=1;factor<=num;factor++)
    {
        if(num%factor==0)
        {
            count=0;
            for(i=1;i<=factor;i++)
            {
                if(factor%i==0)
                {
                    count++;
                }
            }
            if(count==2)
            {
              largest=factor;
            }
        }
    }
    printf("%d is the largest prime factor",largest);
    return 0;
}