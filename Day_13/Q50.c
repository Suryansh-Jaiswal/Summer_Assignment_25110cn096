#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0;
    float avg=0;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    printf("Enter elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("Sum = %d ",sum);
    printf("avg = %f ",avg);
    return 0;
    
}