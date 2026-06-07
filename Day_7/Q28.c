//Recursive reverse number :-
#include<stdio.h>
int rev=0;
int reverse(int num)
{
    if(num==0)
    {
        return rev;
    }
    rev= num%10+rev*10;
    return reverse(num/10);
}
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Reverse= %d",reverse(num));
    return 0;
}
