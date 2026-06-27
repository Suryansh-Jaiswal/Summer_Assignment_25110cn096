#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    float basic,hra,da,gross;
};
int main()
{
    struct employee e[100];
    int n,i;
    char choice;
    printf("Enter the number of employees :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter detail of employee %d\n", i+1);
        printf("Enter the id no :");
        scanf("%d",&e[i].id);
        printf("Enter name of the employee :");
        scanf("%s",e[i].name);
        printf("Basic Salary :");
        scanf("%f",&e[i].basic);
        printf("Does the company provide HRA? Y/N : ");
        scanf(" %c",&choice);
         if(choice=='Y' || choice=='y')
         {
            e[i].hra=e[i].basic*0.20;
         }
         else
         {
             e[i].hra=0;
         }
         printf("Does the company provide DA? Y/N : ");
         scanf(" %c",&choice);
         if(choice=='Y' || choice=='y')
         {
            e[i].da=e[i].basic*0.10;
         }
         else
         {
             e[i].da=0;
         }
         e[i].gross=e[i].basic+e[i].hra+e[i].da;
     }
         printf("Salary Details\n");
         for(i=0;i<n;i++)
         {
            printf("Employee : %d\n",i+1);
            printf("Name : %s\n",e[i].name);
            printf("ID no : %d\n",e[i].id);
            printf("Basic Salary : %.2f\n",e[i].basic);
            printf("HRA : %.2f\n",e[i].hra);
            printf("DA : %.2f\n",e[i].da);
            printf("Gross Salary : %.2f\n",e[i].gross);
    }
    return 0;
}
   
