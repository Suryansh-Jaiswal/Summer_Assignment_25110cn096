#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else if (b>a)
    {
        return b;
    }
    else
    {
        printf("Both numbers are equal : ");
        return a; 
    }    
}
int main()
{
    int num1,num2;
    printf("Enter the first number :");
    scanf("%d",&num1);
    printf("Enter the second number :");
    scanf("%d",&num2);
    printf("Maximum = %d",max(num1,num2));
    return 0;
}