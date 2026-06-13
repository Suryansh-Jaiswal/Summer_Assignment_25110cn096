#include<stdio.h>
int main()
{
    int largest,smallest,i,n,arr[100];
    printf("Enter the no of elements :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    smallest=arr[0];
    for(i=0;i<n;i++)
    {
    if(arr[i]>largest)
    {
       largest=arr[i];
    }
    if(arr[i]<smallest)
    {
        smallest=arr[i];
    }
    }
    printf(" largest = %d ",largest);
    printf("Smallest = %d ",smallest);
    return 0;
}