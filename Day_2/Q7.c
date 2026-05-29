#include<stdio.h>
int main()
{
    int n,digit,product=1;
    printf("enter number:");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        product=product*digit;
        n=n/10;
    }
    printf("%d",product);
    return 0;
}