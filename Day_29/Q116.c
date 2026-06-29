#include<stdio.h>
struct item
{
    int id,quantity;
    char name[50];
    float price,total;
};
int main()
{
    struct item i[100];
    int n,j;
    printf("Enter no of items :");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        printf("Enter detail of item %d\n",j+1);
        printf("Item ID :");
        scanf("%d",&i[j].id);
        printf("Item Name :");
        scanf("%s",i[j].name);
        printf("Quantity :");
        scanf("%d",&i[j].quantity);
        printf("Price :");
        scanf("%f",&i[j].price);
        i[j].total=i[j].quantity*i[j].price;
    }
    printf("\nInventory Details\n");
    for(j=0;j<n;j++)
    {
        printf("Item %d\n",j+1);
        printf("Item ID :- %d\n",i[j].id);
        printf("Item Name :- %s\n",i[j].name);
        printf("Quantity :- %d\n",i[j].quantity);
        printf("Price :- %.2f\n",i[j].price);
        printf("Total Value :- %.2f\n",i[j].total);
    }
    return 0;
}