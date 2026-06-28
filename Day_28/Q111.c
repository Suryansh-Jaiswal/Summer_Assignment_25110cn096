#include<stdio.h>
struct ticket
{
    char name[50],type[20],source[30],destination[30];
    int tickets;
};
int main()
{
    struct ticket t[100];
    int n,i;
    printf("Enter the no of bookings :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter detail of booking %d\n",i+1);
        printf("Customer Name :");
        scanf("%s",t[i].name);
        printf("Ticket Type :");
        scanf("%s",t[i].type);
        printf("Source :");
        scanf("%s",t[i].source);
        printf("Destination :");
        scanf("%s",t[i].destination);
        printf("No of Tickets :");
        scanf("%d",&t[i].tickets);
    }
    printf("    Booking Details     \n");
    for(i=0;i<n;i++)
    {
        printf("Booking %d\n",i+1);
        printf("Customer Name :- %s\n",t[i].name);
        printf("Ticket Type :- %s\n",t[i].type);
        printf("Source :- %s\n",t[i].source);
        printf("Destination :- %s\n",t[i].destination);
        printf("No of Tickets :- %d\n",t[i].tickets);
    }
    return 0;
}