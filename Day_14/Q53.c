#include<stdio.h>
int main()
{
    int arr[100],i,n,num;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search :");
    scanf("%d",&num);
    int found=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            found=1;
            printf("Found");
            break;
        }
    }
        if(found==0)
        {
            printf("Not Found");
        }
    return 0;
}
