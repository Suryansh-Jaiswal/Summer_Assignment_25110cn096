#include<stdio.h>
int prime(int num)
{
    int i;
    if(num<=1)
    {
        return 0;
    }
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            {
                return 0;
            }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(prime(n)==0)
    {
        printf("Not prime");
    }
    else
    printf("Prime");
    return 0;    
}