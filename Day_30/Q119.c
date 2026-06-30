#include<stdio.h>
struct employee
{
    int id;
    float salary;
    char name[50],department[50];
};
int main()
{
    struct employee e[100];
    int n,i;
    printf("Enter no of employees :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter details of employee :%d\n",i+1);
        printf("Enter id no :");
        scanf("%d",&e[i].id);
        printf("Enter name :");
        scanf("%s",e[i].name);
        printf("Department :");
        scanf("%s",e[i].department);
        printf("Salary :");
        scanf("%f",&e[i].salary);
    }
    printf("Employee records\n");
    for(i=0;i<n;i++)
    {
        printf("Employee %d\n",i+1);
        printf("Employee ID :- %d\n",e[i].id);
        printf("Employee Name :- %s\n",e[i].name);
        printf("Department :- %s\n",e[i].department);
        printf("Salary :- %.2f\n",e[i].salary);
    }
    return 0;
 }