//Intersection Elements :-
#include<stdio.h>
int main()
{
    int a1[100],a2[100],n1,n2,i,j;
    printf("Enter the no of elements in first array :");
    scanf("%d",&n1);
    printf("Enter the elements :");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter the no elements in second array :");
    scanf("%d",&n2);
    printf("Enter the elements :");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }
    printf("Intersection elements :");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a1[i]==a2[j])
            {
                printf("%d ",a1[i]);
                break;
            }
        }
    }
    return 0;
}