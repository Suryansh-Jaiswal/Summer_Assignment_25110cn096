#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,flag=1;
    printf("Enter the no of rows and columns :");
    scanf("%d%d",&r,&c);
    if(r!=c)
    {
        printf("Matrix is not symmetric");
        return 0;
    }
    printf("Enter the matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
        break;
        }
    }   
    if(flag==1)
    {
        printf("Symmetric");
    }
    else
    {
        printf("Not symmetric");
    }
    return 0;
}