#include<stdio.h>
int main()
{
    char str1[100],str2[100],temp[100];
    int i,j,l1=0,l2=0,found=0;
    printf("Enter the first string :");
    scanf("%s",str1);
    printf("Enter the second string :");
    scanf("%s",str2);
    while(str1[l1]!='\0')
        l1++;
    while(str2[l2]!='\0')
        l2++;
        if(l1!=l2)
        {
            printf("not rotation");
            return 0;
        }
        for(i=0;i<l1;i++)
        {
            for(j=0;j<l1;j++)
            {
                temp[j]=str1[(i+j)%l1];
            }
        temp[j]!='\0';
        for(j=0;j<l1;j++)
        {
            if(temp[j]!=str2[j])
            {
                break;
            }
        }
        if(j==l1)
        {
            found=1;
            break;
        }
        }
        if(found==1)
        {
            printf("rotation");
        }
        else
        {
            printf("not rotation");
        }
        return 0;
}