#include<stdio.h>
int main()
{
    int a1[100],a2[100],a3[200],i,j,n1,n2,temp,k=0;
    printf("Enter size of first array :");
    scanf("%d",&n1);
    printf("Enter size of second array :");
    scanf("%d",&n2);
    printf("Enter element of first array :");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
        a3[k]=a1[i];
        k++;
    }
    printf("Enter element of second array :");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
        a3[k]=a2[i];
        k++;
    }
    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a3[i]>a3[j])
            {
                temp=a3[i];
                a3[i]=a3[j];
                a3[j]=temp;
            }
        }
    }
    printf("Enter merged array :");
    for(i=0;i<k;i++)
    {
        printf("%d ",a3[i]);
    }
    return 0;
}