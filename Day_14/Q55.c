#include<stdio.h>
int main()
{
    int arr[100],i,n,largest,second,temp;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    second=arr[1];
    if(second>largest)
    {
        temp=largest;
        largest=second;
        second=temp;
    }
    
    for(i=2;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second&&largest!=arr[i])
        {
            second=arr[i];
        }
    }
    printf("Second largest = %d",second);
    return 0;
}