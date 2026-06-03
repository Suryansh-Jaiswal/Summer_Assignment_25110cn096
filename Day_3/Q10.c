#include<stdio.h>
int main()
{
    int first,last,i,j,factor;
    printf("Enter starting number :");
    scanf("%d",&first);
    printf("Enter last number :");
    scanf("%d",&last);
    for(i=first;i<=last;i++)
    {
        factor=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                factor++;
            }
        }
        if(factor==2)
        {
            printf("%d ",i);
        }
    }
        return 0;
}