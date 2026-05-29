#include<stdio.h>
int main()
{
 int number,digit,sum=0;

 printf("enter the number :");
 scanf("%d",&number);

 while(number>0)
 {
    digit=number%10;
    sum=sum+digit;
    number=number/10;
 }
 printf("%d",sum);
 return 0;
}