#include<stdio.h>
int main()
{
    int arr[100],i,n,count=0,num;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Enter the number to check the frequency :");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            count++;
        }
    }
    printf("%d = frequency",count);
    return 0;
}
