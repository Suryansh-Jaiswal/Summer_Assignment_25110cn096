#include<stdio.h>
int main()
{
    char str[100],character;
    int i,j,count,max=0;
    printf("Enter a string :");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            character=str[i];
        }
    }
    printf("Maximum character = %c ",character);
    printf("frequency = %d",max);
    return 0;
 
}