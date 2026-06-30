#include<stdio.h>
int main()
{
    int rollno[100],marks[100],n,i;
    char name[100][100];
    printf("Enter the no of students :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Student no %d\n",i+1);
        printf("Roll no ");
        scanf("%d",&rollno[i]);
        printf("Enter name ");
        scanf("%s",&name[i]);
        printf("Enter marks of the student ");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Student record %d\n",i+1);
        printf("Roll No :- %d\n",rollno[i]);
        printf("Name :- %s\n",name[i]);
        printf("Marks :- %d\n",marks[i]);
    }
    return 0;
}