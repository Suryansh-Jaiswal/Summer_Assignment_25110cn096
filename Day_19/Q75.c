#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c;
    printf("Enter the no of rows :");
    scanf("%d",&r);
    printf("Enter the no of columns :");
    scanf("%d",&c);
    printf("Enter the matrices :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose matrices :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}