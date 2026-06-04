// Nth term of fibonacci series
#include<stdio.h>
int main()
{
    int num,first=0,second=1,position=1,sum;
    printf("Enter the nth number :");
    scanf("%d",&num);
    while(position<num)
    {
        sum=first+second;
        first=second;
        second=sum;
        position++;
    } 

    printf(" nth term is: %d",first);
    return 0;

}