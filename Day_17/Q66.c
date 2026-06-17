//Union of Arrays :-
#include<stdio.h>
int main()
{
    int a1[100],a2[100],n1,n2,i,j,found;
    printf("Enter the no of elements in first array :");
    scanf("%d",&n1);
    printf("Enter elements of first array :");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter the no of elements in second array :");
    scanf("%d",&n2);
    printf("Enter elements of second array :");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=0;i<n1;i++)
    {
        printf("%d",a1[i]);
    }
    for(i=0;i<n2;i++)
    {
        found=0;
        for(j=0;j<n1;j++)
        {
            if(a2[i]==a1[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            printf("%d ",a2[i]);
        }
    }
    return 0;
}