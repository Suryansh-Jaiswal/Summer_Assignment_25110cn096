#include<stdio.h>
int main()
{
    char str[100];
    int i=0,n,start,end,found=1;
    printf("Enter the string :");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    n=i;
    start=0;
    end=n-1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            found=0;
            break;
        }
        start++;
        end--;
    }
    if(found==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}