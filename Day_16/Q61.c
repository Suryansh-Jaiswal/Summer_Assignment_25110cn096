#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0,A;
    printf("Enter the no of terms :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    A=n*(n+1)/2;
    printf("Missing no is = %d",A-sum);
    return 0;
}