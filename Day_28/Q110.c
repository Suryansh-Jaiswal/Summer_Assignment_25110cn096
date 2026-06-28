#include<stdio.h>
struct account
{
    int AcNo;
    char name[50];
    float balance,deposit,withdraw;
};
int main()
{
    struct account a[100];
    int n,i;
    printf("Enter number of accounts :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter details of Account %d\n",i+1);
        printf("Account Number :");
        scanf("%d",&a[i].AcNo);
        printf("Account Holder :");
        scanf("%s",a[i].name);

        printf("Current Balance :");
        scanf("%f",&a[i].balance);
        printf("Deposit Amount :");
        scanf("%f",&a[i].deposit);
        a[i].balance+=a[i].deposit;
        printf("Withdraw Amount :");
        scanf("%f",&a[i].withdraw);
         if(a[i].withdraw<=a[i].balance)
        {
            a[i].balance-=a[i].withdraw;
        }
        else
        {
            printf("Insufficient Balance\n");
        }
    }
    printf("Account Detail\n");
     for(i=0;i<n;i++)
    {
        printf("Account %d\n",i+1);
        printf("Account No :%d\n",a[i].AcNo);
        printf("Name       :%s\n",a[i].name);
        printf("Balance    :%.2f\n",a[i].balance);
    }
    return 0;
  }
