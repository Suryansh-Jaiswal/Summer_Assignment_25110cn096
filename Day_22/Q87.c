#include<stdio.h>
int main()
{
    char str[100],c;
    int i=0,count=0;
    printf("Enter a string :");
    scanf("%s",str);
    printf("Enter a character :");
    scanf(" %c",&c);
    while(str[i]!='\0')
    {
        if(str[i]==c)
        {
            count++;
        }
        i++;
    }
    printf("Frequency of the character = %d",count);
    return 0;
}