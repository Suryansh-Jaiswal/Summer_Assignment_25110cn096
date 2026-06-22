#include<stdio.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("Enter a sentence :");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]!=' '&&(i==0||str[i-1]==' '))
        {
            count++;
        }
    }
    printf("No of words = %d",count);
    return 0;
}