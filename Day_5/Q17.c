#include<stdio.h>
int main()
{
    int num,factor,sum=0;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Factors :");
    for(factor=1;factor<num;factor++)
    {
        if(num%factor==0)
        {
            printf("%d ",factor);
            sum=sum+factor;
        }
    }
    printf("\n");
    if(num==sum)
    {
        printf("%d is a perfect number", num);
    }
    else
    {
        printf("%d is not a perfect number", num);
    }
    return 0;
}