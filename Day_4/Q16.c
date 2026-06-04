#include<stdio.h>
int main()
{
    int first,last,copy,sum,digit,i;
    printf("enter the first number :");
    scanf("%d",&first);
    printf("enter the last number :");
    scanf("%d",&last);
    for(i=first;i<=last;i++)
    {
        copy=i;
        sum=0;
        while(copy>0)
        {
        digit=copy%10;
        sum=sum+digit*digit*digit;
        copy=copy/10;
        }
    if(sum==i) 
    {
    printf("%d ",i);
    }
    }
    return 0;
}