#include<stdio.h>
int main()
{
    int number=3;
    int guess;
    printf("Guess the number between 1 and 10 :\n");
    while(1)
    {
        printf("Enter your guess :");
        scanf("%d",&guess);
        if(guess==number)
        {
            printf("The guess is correct");
            break;
        }
        else if(guess<number)
        {
            printf("too low\n");
        }
        else
        {
            printf("too high\n");
        }
    }
    return 0;
}