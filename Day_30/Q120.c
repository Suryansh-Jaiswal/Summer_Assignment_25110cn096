#include<stdio.h>
#include<string.h>
void input(char name[][50],char interest[][50],int n);
void display(char name[][50],char interest[][50],int n);
void suggestion(char name[][50],char interest[][50],int n);
int main()
{
    char name[50][50],interest[50][50];
    int n;
    printf("Enter the no of user :");
    scanf("%d",&n);
    input(name,interest,n);
    display(name,interest,n);
    suggestion(name,interest,n);
    return 0;
}
void input(char name[][50],char interest[][50],int n)
{
    int i,choice;
    for(i=0;i<n;i++)
    {
        printf("Enter detail of the user no %d\n",i+1);
        printf("Enter name :");
        scanf("%s",name[i]);
        printf("Choose Your Interest\n");
        printf("1.Artificial Intelligence\n");
        printf("2.Web Development\n");
        printf("3.Android Development\n");
        printf("4.Game Development\n");
        printf("5.Cyber Security\n");
        printf("6.Data Science\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                strcpy(interest[i],"AI");
                break;
            case 2:
                strcpy(interest[i],"Web");
                break;
            case 3:
                strcpy(interest[i],"Android");
                break;
            case 4:
                strcpy(interest[i],"Game");
                break;
            case 5:
                strcpy(interest[i],"Cyber");
                break;
            case 6:
                strcpy(interest[i],"Data");
                break;
            default:
                strcpy(interest[i],"Unknown");
        }
    }
}
void display(char name[][50],char interest[][50],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("User detail %d\n",i+1);
        printf("Name :- %s \n",name[i]);
        printf("Interest :- %s \n",interest[i]);
    }
}
void suggestion(char name[][50],char interest[][50],int n)
{
    int i;
    printf("Programming Language Recommendation\n");
    for(i=0;i<n;i++)
    {
        printf("%s \n",name[i]);
        if(strcmp(interest[i],"AI")==0)
        {
            printf("Recommended Language :- Python\n");
        }
        else if(strcmp(interest[i],"Web")==0)
        {
            printf("Recommended Language :- JavaScript\n");
        }
        else if(strcmp(interest[i],"Android")==0)
        {
            printf("Recommended Language :- Kotlin\n");
        }
        else if(strcmp(interest[i],"Game")==0)
        {
            printf("Recommended Language :- C++\n");
        }
        else if(strcmp(interest[i],"Cyber")==0)
        {
            printf("Recommended Language :- C\n");
        }
        else if(strcmp(interest[i],"Data")==0)
        {
            printf("Recommended Language :- Python\n");
        }
        else
        {
            printf("Recommended Language :- C\n");
        }
    }
}
