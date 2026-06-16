#include<stdio.h>
int main()
{
    int arr[100],i,j,n,found;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        found=0;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        printf("%d ",arr[i]);
    }
    return 0;
}