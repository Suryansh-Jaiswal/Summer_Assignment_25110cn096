#include<stdio.h>
int main()
{
    int num,copy,digit,sum=0;
    printf("Enter the number :");
    scanf("%d",&num);
    copy=num;
    while(copy>0)
    {
        digit=copy%10;
        sum=sum+digit*digit*digit;
        copy=copy/10;
    }
    if(num==sum)
    {
        printf("The given number is an armstrong number");
    }
    else
    {
        printf("not an armstrong number");
    }
    return 0;
}