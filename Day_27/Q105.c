#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct student s[100];
    int n,i;
    printf("Enter the number of students :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter detail of student %d\n", i+1);
        printf("Enter the roll no :");
        scanf("%d",&s[i].roll);
        printf("Enter name of the sudent :");
        scanf("%s",s[i].name);
        printf("Enter marks of the student :");
        scanf("%f",&s[i].marks);
    }
    printf("Student records\n");
    for(i=0;i<n;i++)
    {
        printf("Student : %d\n",i+1);
        printf("Name : %s\n",s[i].name);
        printf("Roll no : %d\n",s[i].roll);
        printf("Marks : %.2f\n",s[i].marks);
    }
    return 0;
}