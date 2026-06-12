#include<stdio.h>
int pal(int num)
{
    int rev=0,temp;
    temp=num;
    while(num>0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    if(temp==rev)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(pal(n))
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}