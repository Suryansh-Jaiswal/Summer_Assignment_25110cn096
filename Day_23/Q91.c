#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i,j,l1=0,l2=0;
    char temp;
    printf("Enter first string :");
    scanf("%s",str1);
    printf("Enter second  string :");
    scanf("%s",str2);
    while(str1[l1]!='\0')
    {
        l1++;
    }
    while(str2[l2]!='\0')
    {
        l2++;
    }
    if(l1!=l2)
    {
        printf("Not anagram");
        return 0;
    }
    for(i=0;i<l1-1;i++)
    {
        for(j=i+1;j<l1;j++)
        {
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
            if(str2[i]>str2[j])
            {
                temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }
    for(i=0;i<l1;i++)
    {
        if(str1[i]!=str2[i])
        {
            printf("not anagram");
            return 0;
        }
    }
    printf("Anagram");
}