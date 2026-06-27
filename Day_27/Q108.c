#include<stdio.h>
struct student
{
    int roll;
    char name[50],grade;
    float m1,m2,m3,total,percentage;
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
        printf("Enter marks of the subject 1 :");
        scanf("%f",&s[i].m1);
        printf("Enter marks of the subject 2 :");
        scanf("%f",&s[i].m2);
        printf("Enter marks of the subject 3 :");
        scanf("%f",&s[i].m3);
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].percentage=s[i].total/3;
        if(s[i].percentage >= 90)
        s[i].grade='A';
        else if(s[i].percentage >= 75)
        s[i].grade='B';
        else if(s[i].percentage >= 60)
        s[i].grade='C';
        else if(s[i].percentage >= 40)
        s[i].grade='D';
        else
        s[i].grade='F';
    }
    printf("    MARKSHEET   \n");
    for(i=0;i<n;i++)
    {
        printf("Student %d\n",i+1);
        printf("Roll Number :%d\n",s[i].roll);
        printf("Name :%s\n",s[i].name);
        printf("Subject 1 : %.2f\n",s[i].m1);
        printf("Subject 2 : %.2f\n",s[i].m2);
        printf("Subject 3 : %.2f\n",s[i].m3);
        printf("Total : %.2f\n",s[i].total);
        printf("Percentage : %.2f%%\n",s[i].percentage);
        printf("Grade : %c\n",s[i].grade);
    }
    return 0;
}
