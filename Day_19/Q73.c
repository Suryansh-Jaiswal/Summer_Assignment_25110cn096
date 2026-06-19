#include<stdio.h>
int main()
{
    int a1[10][10],a2[10][10],a3[10][10],i,j,r,c;
    printf("Enter the no of rows :");
    scanf("%d",&r);
    printf("Enter the no of columns :");
    scanf("%d",&c);
    printf("Enter the first matrices\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the second matrices :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    printf("Sum of matrices :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];
            printf("%d ",a3[i][j]);
        }
        printf("\n");
    }
     return 0;
}