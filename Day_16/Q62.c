#include<stdio.h>
int main()
{
    int arr[100],i,j,n,count,freq=0,element=0;
    printf("Enter the  no of elements :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
            count++;
            }
        }
    
    if(count>freq)
       {
        freq=count;
        element=arr[i];
       }
        
    }
    printf("Maximum frequency element = %d ",element);
    printf("Maximum frequency = %d ",freq);
    return 0;
}