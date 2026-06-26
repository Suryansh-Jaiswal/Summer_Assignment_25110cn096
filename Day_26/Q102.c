#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    if(age<0)
    {
        printf("Invalid age");
    }
    else if(age>=18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("not eligible");
    }
    return 0;
}