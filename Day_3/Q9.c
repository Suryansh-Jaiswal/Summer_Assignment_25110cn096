#include<stdio.h>
int main()
{
    int num,i,factors=0;
    printf("enter the number :");
    scanf("%d",&num);

    for(i=1;i<=num;i++) 
    {
        if(num%i==0)
        {
            factors++;
        }

    }
    if (factors==2)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    return 0;

}