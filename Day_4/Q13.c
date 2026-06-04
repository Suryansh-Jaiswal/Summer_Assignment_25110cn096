// fibonacci Series
#include<stdio.h>
int main()
{
    int num,first=0,second=1,sum,i;
    printf("Enter number of terms :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d ",first);
        sum=first+second;
        first=second;
        second=sum;
    }
    return 0;

}
