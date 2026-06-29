#include<stdio.h>
int main()
{
    float a,b,result;
    int choice;
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    printf("Enter two numbers \n");
    scanf("%f%f",&a,&b);
    switch(choice)
    {
        case 1:
        result=a+b;
        printf("Result = %.2f",result);
        break;
        case 2:
        result=a-b;
        printf("Result = %.2f",result);
        break;
        case 3:
        result=a*b;
        printf("Result = %.2f",result);
        break;
        case 4:
        if(b==0)
        {
            printf("Undefined");
        }
        else
        {
            result=a/b;
            printf("Result = %.2f",result);
        }
        break;
        default:
        printf("Invalid Choice");
    }
    return 0;
}