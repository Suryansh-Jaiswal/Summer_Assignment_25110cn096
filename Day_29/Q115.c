#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],temp;
    int choice,i,l=0;
    printf("Enter first string : ");
    scanf("%s",str1);
    printf("1.Find Length\n");
    printf("2.Reverse String\n");
    printf("3.Copy String\n");
    printf("4.Compare Strings\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        l=0;
        while(str1[l]!=0)
        {
            l++;
        }
        printf("Length = %d",l);
        break;
        case 2:
        l=0;
        while(str1[l]!='\0')
        {
            l++;
        }
        for(i=0;i<l/2;i++)
        {
            temp=str1[i];
            str1[i]=str1[l-i-1];
            str1[l-i-1]=temp;
        }
        printf("Reverse String : %s",str1);
        break;
        case 3:
        strcpy(str2,str1);
        printf("Copied String : %s",str2);
        break;
        case 4:
        printf("Enter second string : ");
        scanf("%s",str2);
        if(strcmp(str1,str2)==0)
        {
            printf("Strings are equal");
        }
        else
        {
            printf("Strings are not equal");
        }
        break;
        default:
        printf("Invalid Choice");
    }
     return 0;
}