 //Selection sort :-
 #include<stdio.h>
int main()
{
    int arr[100],i,j,n,temp,min=0;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
        if(arr[j]<arr[min])
        {
            min=j;
        }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
     for(i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }
     return 0;
 }