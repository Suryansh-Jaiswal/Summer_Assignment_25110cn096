#include<stdio.h>
int main()
{
int num,bits=0,rem;
printf("Enter the number :");
scanf("%d",&num);
while(num>0)
{
    rem=num%2;
    if(rem==1)
    {
      bits++;
    }
    num=num/2;
}
printf("Set bits= %d",bits);
return 0;
}
