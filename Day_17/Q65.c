//Merge arrays :-
#include<stdio.h>
int main()
{
    int a1[100],a2[100],a3[200],i,j=0,n1,n2;
    printf("Enter the no of elements :");
    scanf("%d",&n1);
    printf("Enter elements of first array :");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter the no of elements in second array :");
    scanf("%d",&n2);
    printf("Enter the elements of second array :");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=0;i<n1;i++)
    {
        a3[j]=a1[i];
        j++;
    }
    for(i=0;i<n2;i++)
    {
        a3[j]=a2[i];
        j++;
    }
    printf("Enter the merged array :");
    for(i=0;i<n1+n2;i++)
        {
            printf("%d ",a3[i]);
        }
        return 0;
}