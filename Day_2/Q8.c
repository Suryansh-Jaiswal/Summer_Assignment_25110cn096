#include<stdio.h>
int main()
{
    int n,saved,digit,rev=0;
    printf("enter the number:");
    scanf("%d",&n);
    saved=n;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }
    if(saved==rev)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}