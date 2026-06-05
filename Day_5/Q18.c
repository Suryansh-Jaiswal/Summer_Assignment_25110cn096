#include<stdio.h>
int main()
{
    int num,copy,digit,sum=0,i,fact;
    printf("Enter the number :");
    scanf("%d",&num);
    copy=num;
    while(copy>0)
    {
        digit=copy%10;
        fact=1;
        for(i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        copy=copy/10;

    }
    if(num==sum)
    {
        printf("%d is a strong number",num);
    }
    else
    {
        printf("%d is not a strong number",num);
    }
    return 0;
    
}