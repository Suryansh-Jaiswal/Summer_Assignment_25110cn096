#include<stdio.h>
int main()
{
    int arr[100],i,n,temp;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    for(i=n-1;i>0;i--)
    {
       arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}