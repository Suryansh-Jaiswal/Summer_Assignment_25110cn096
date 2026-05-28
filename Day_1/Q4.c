#include<stdio.h>
int main()
{
    int n,digit=0;
    printf("enter number :");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        digit++;
    }
    printf("%d",digit);
    return 0;

}