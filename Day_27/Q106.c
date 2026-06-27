#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    float salary;
    char department[50];
};

int main()
{
    struct employee e[100];
    int n,i;
    printf("Enter the number of employees :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter detail of employee %d\n", i+1);
        printf("Enter the id no :");
        scanf("%d",&e[i].id);
        printf("Enter name of the employee :");
        scanf("%s",e[i].name);
        printf("Enter department of the employee :");
        scanf("%s",e[i].department);
        printf("Enter salary of the employee :");
        scanf("%f",&e[i].salary);
    }
    printf("Employee records\n");
    for(i=0;i<n;i++)
    {
        printf("Employee : %d\n",i+1);
        printf("Name : %s\n",e[i].name);
        printf("ID no : %d\n",e[i].id);
        printf("Department : %s",e[i].department);
        printf("Salary : %.2f\n",e[i].salary);
    }
    return 0;
}