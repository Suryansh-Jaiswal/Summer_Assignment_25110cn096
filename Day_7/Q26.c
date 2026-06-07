//Recursive fibonacci :-
#include<stdio.h>
int fib(int num)
{
    if(num==0)
    {
        return 0;
    }
    if(num==1)
    {
        return 1;
    }
return fib(num-1)+fib(num-2);
}
int main()
{
    int num,i;
    printf("Enter the position :");
    scanf("%d",&num);
    printf("Fibonacci series :");
    for(i=0;i<=num;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}