#include<stdio.h>
int fact(int num)
{
    int f=1,i;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    printf("factorial= %d",fact(number));
    return 0;
}