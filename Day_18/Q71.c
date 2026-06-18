#include<stdio.h>
int main()
{
    int arr[100],i,n,num,mid,high,low,found=0;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search :");
    scanf("%d",&num);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==num)
        {
            found=1;
            break;
        }
        else if(num>arr[mid])
        {
            low=mid+1;
        }
        else
        {
        high=mid-1;
        }
    }
    if(found==1)
    {
        printf("Element found at position = %d ",mid+1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}