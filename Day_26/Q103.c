#include<stdio.h>
int main()
{
    int option;
    float balance=9999999,amount;
    printf("ATM Menu\n");
    printf("1.Check balance\n");
    printf("2.Deposit money\n");
    printf("3.Withdraw money\n");
    printf("4.Exit\n");
    printf("Enter option no :");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        printf("Enter available = %.2f",balance);
        break;
        case 2:
        printf("Enter deposit amount :");
        scanf("%f",&amount);
        if(amount<=0)
        {
            printf("Invalid amount");
        }
        else
        {
            balance=balance+amount;
            printf("Amount deposited successfully\n");
            printf("Updated Balance=%.2f",balance);
        }
        break;
        case 3:
        printf("Enter withdrawal amount\n");
        scanf("%f",&amount);
        if(amount<=0)
        {
            printf("Invalid amount");
        }
        else if(amount>balance)
        {
            printf("Insufficient balance");
        }
        else
        {
            balance=balance-amount;
            printf("Amount withdraw successfully");
            printf("Updated balance=%.2f",balance);
        }
        break;
        case 4:
        printf("Thank You for Using ATM");
        break;
    }
    return 0;
}