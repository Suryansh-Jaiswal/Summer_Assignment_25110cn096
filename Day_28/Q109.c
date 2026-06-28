#include<stdio.h>
struct book
{
    int id,quantity;
    char name[50],author[50],category[50],status;
    float price;
};
int main()
{
    struct book b[200];
    int i,n,total=0;
    printf("Enter the no of books\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Book id :");
        scanf("%d",&b[i].id);
        printf("Quantity :");
        scanf("%d",&b[i].quantity);
        printf("Book Name :");
        scanf("%s",b[i].name);
        printf("Author Name :");
        scanf("%s",b[i].author);
        printf("Category :");
        scanf("%s",b[i].category);
        printf("Price :");
        scanf("%f",&b[i].price);
        printf("Available Y/N :");
        scanf(" %c",&b[i].status);
        total+=b[i].quantity;
    }
    printf("          Library Records          \n");
    for(i=0;i<n;i++)
    {
        printf("Book %d\n",i+1);
        printf("Book ID :- %d\n",b[i].id);
        printf("Book Name :- %s\n",b[i].name);
        printf("Author :- %s\n",b[i].author);
        printf("Category :- %s\n",b[i].category);
        printf("Price :- %.2f\n",b[i].price);
        printf("Quantity :- %d\n",b[i].quantity);
        if(b[i].status=='Y'||b[i].status=='y')
        {
        printf("Status :- Available\n");
        }
        else
        {
            printf("Status :- Issued\n");
        }
    }
            printf("Total books in library :%d",total);
            return 0;
}