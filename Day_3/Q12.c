#include<stdio.h>
int main()
{
    int num1,num2,lcm,larger;
    printf("enter the first number :");
    scanf("%d",&num1);

    printf("enter the second number :");
    scanf("%d",&num2);

    if(num1>num2)
     {
        larger=num1;
     }
     else
     {
        larger=num2;
     }
     while(1)
     {
        if(larger%num1==0 && larger%num2==0)
        {
            lcm=larger;
            break;
        }
           larger++;
    }
    printf("LCM=%d",lcm);
    return 0;
}