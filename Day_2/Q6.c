#include<stdio.h>
int main()
{
    int digit,n,reverse=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n>0)
    { 
      digit=n%10;
      reverse=reverse*10+digit;
      n=n/10;
    }

    printf("%d",reverse);
    return 0;
}