#include<stdio.h>
int perfect(int num)
{
    int i,sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(perfect(n))
    {
        printf("Perfect number");
    }
    else
    {
        printf("not perfect number");
    }
    return 0;
}