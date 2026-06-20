#include<stdio.h>
int main()
{
    int a1[10][10],a2[10][10],a3[10][10],i,j,k,r1,c1,r2,c2;
    printf("Enter the no of rows and column for the first matrices :");
    scanf("%d%d",&r1,&c1);
    printf("Enter first matrices :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the rows and column of the second matrices :");
    scanf("%d%d",&r2,&c2);
    printf("Enter second matrices :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    if(c1!=r2)
    {
        printf("Matrix multiplication is not possible");

    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
        a3[i][j]=0;
        
        for(k=0;k<c1;k++)
        {
            a3[i][j]=a3[i][j]+a1[i][k]*a2[k][j];
        }
        }
    }
    printf("Multiplication of matrices :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",a3[i][j]);
        }
        printf("\n");
    }
    return 0;
}