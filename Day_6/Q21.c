//Decimal to binary conversion
#include<stdio.h>
int main()
{
    int num,rem,binary=0,pos=1;
    printf("Enter the number :");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%2;
        binary=binary+rem*pos;
        pos=pos*10;
        num=num/2;
    }
    printf("Binary number = %d",binary);
    return 0;
}