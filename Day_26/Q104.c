#include<stdio.h>
int main()
{
    int ans,score=0;
    printf("\nQ1.Which company developed Minecraft\n");
    printf("1.Rockstar\n2.Mojang\n3.EA\n4.Ubisoft\n");
    printf("Enter your answer :");
    scanf("%d",&ans);
    if(ans==2)
    {
        score++;
    }
    printf("\nQ2.Which game features the character CJ?\n");
    printf("1.GTA Vice City\n2.GTA San Andreas\n3.GTA V\n4.PUBG\n");
    printf("Enter your answer :");
    scanf("%d",&ans);
    if(ans==2)
    {
        score++;
    }
    printf("\nQ3.Which game is famous for building with blocks?\n");
    printf("1.Valorant\n2.Minecraft\n3.Apex Legends\n4.CS2\n");
    printf("Enter your answer :");
    scanf("%d",&ans);
    if(ans==2)
    {
        score++;
    }
    printf("\nYour Score=%d/3\n",score);
    if(score==3)
    printf("You are a pro gamer");
    else if(score==2)
    printf("Good Job");
    else if(score==1)
    printf("Keep Playing");
    else
    printf("Better Luck Next Time");
    return 0;
}