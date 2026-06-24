#include<stdio.h>
int main()
{
    char str[100];
    int i=0,l=0,max=0,start=0,maxstart=0;
    printf("Enter a sentence :");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' '&&str[i]!='\n')
        {
            l++;
        }
        else
        {
            if(l>max)
            {
                max=l;
                maxstart=start;
            }
            l=0;
            start=i+1;
        }
    }
    if(l>max)
    {
        max=l;
        maxstart=start;
    }
    printf("Longest word = ");
    for(i=maxstart;i<maxstart+max;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}

