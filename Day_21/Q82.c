#include<stdio.h>
int main()
{
    char str[100];
    int i=0,n;
    printf("Enter the string :");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    n=i;
    printf("Reverse string :");
    for(i=n-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}