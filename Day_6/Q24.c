#include<stdio.h>
int main()
{
    int base,power,value=1,i;
    printf("Enter the base no :");
    scanf("%d",&base);
    printf("Enter the power :");
    scanf("%d",&power);
    for(i=1;i<=power;i++)
    {
        value=value*base;
    }
    printf("%d",value);
    return 0;
}