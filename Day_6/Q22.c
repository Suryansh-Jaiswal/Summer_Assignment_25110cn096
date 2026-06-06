//Binary to decimal :-
#include<stdio.h>
int main()
{
    int binary,decimal=0,rem,pos=1;
    printf("Enter the number :");
    scanf("%d",&binary);
    while(binary>0)
    {
        rem=binary%10;
        decimal=decimal+rem*pos;
        binary=binary/10;
        pos=pos*2;
    }
    printf("Decimal number=%d",decimal);
    return 0;
}