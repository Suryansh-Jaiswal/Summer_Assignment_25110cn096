#include<stdio.h>
struct library
{
    int id,quantity;
    char name[50],author[50];
};
int main()
{
    struct library b[100];
    int n,i;
    printf("Enter no of books :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Details of the book no %d\n",i+1);
        printf("Book id ");
        scanf("%d",&b[i].id);
        printf("Book Name :");
        scanf("%s",b[i].name);
        printf("Author Name :");
        scanf("%s",b[i].author);
        printf("Quantity :");
        scanf("%d",&b[i].quantity);
    }
    printf("Library Records\n");
    for(i=0;i<n;i++)
    {
        printf("Book %d\n",i+1);
        printf("Book ID :- %d\n",b[i].id);
        printf("Book Name :- %s\n",b[i].name);
        printf("Author Name :- %s\n",b[i].author);
        printf("Quantity :- %d\n",b[i].quantity);
    }
    return 0;
}