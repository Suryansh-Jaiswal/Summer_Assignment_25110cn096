#include<stdio.h>
int main()
{
    int num,factor;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Factors :");
    for(factor=1;factor<=num;factor++)
    {
        if(num%factor==0)
        {
            printf("%d ",factor);
        }
    }
    return 0;

}