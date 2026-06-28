#include<stdio.h>
#include<string.h>
struct contact
{
    char name[100],phone[100],email[100];
};
int main()
{
    struct contact c[100];
    char search[50];
    int i,n,found=0;
    printf("Enter no of contacts :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter contact %d\n",i+1);
        printf("Name :-");
        scanf("%s",c[i].name);
        printf("Phone :-");
        scanf("%s",c[i].phone);
        printf("Email :-");
        scanf("%s",c[i].email);
    }
    printf("Search contact:");
    scanf("%s",search);
    for(i=0;i<n;i++)
    {
        if(strcmp(search,c[i].name)==0)
        {
            printf("Contact Found\n");
            printf("Name :- %s\n",c[i].name);
            printf("Phone :- %s\n",c[i].phone);
            printf("Email :- %s\n",c[i].email);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("Contact Not Found");
    }
    return 0;
}