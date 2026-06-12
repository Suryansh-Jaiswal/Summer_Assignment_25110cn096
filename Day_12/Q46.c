#include<stdio.h>
int armstrong(int num)
{
    int digit,sum=0,temp;
    temp=num;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit*digit*digit;
        num=num/10;
    }
    if(sum==temp)
    {
        return 1;
    }
    else 
    return 0;
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(armstrong(n))
    {
        printf("Armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}
