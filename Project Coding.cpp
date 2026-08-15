#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int player,computer;
    int playerScore,computerScore,playAgainOption;
    srand(time(0));
    playAgainOption = 1;
    printf("\t\t\t========== WELCOME TO ROCK, PAPER, SCISSORS GAME ==========\n\n");
    printf("### Core Game Rules: ###\n");
    printf("* Rock beats scissors by crushing it.\n");
    printf("* Paper beats rock by covering it.\n");
    printf("* Scissors beat paper by cutting it.\n");
    printf("* Same choice = Draw!\n");
    printf("* First to 2 points wins!\n\n");
    printf("\t\t\t\t===========================================\n\n");
    while (playAgainOption == 1){
        playerScore=0;
        computerScore=0;
        printf("\n\t\t\t\t\t   ===== GAME START =====\n");
        while (playerScore<2 && computerScore<2)
        {
            printf("\n1. Rock\n");
            printf("2. Paper\n");
            printf("3. Scissors\n");
            printf("Enter choice:");
            scanf("%d",&player);
            if (player<1 || player>3)
            {
                printf("Invalid choice!\n");
                continue;
            }
            computer=rand()%3+1;
            printf("\nYou chose:");
            switch(player)
            {
                case 1:printf("Rock");break;
                case 2:printf("Paper");break;
                case 3:printf("Scissors");break;
            }
            printf("\nComputer chose:");
            switch (computer)
            {
                case 1:printf("Rock");break;
                case 2:printf("Paper");break;
                case 3:printf("Scissors");break;
            }
            if (player == computer)
            {
                printf("\nDraw!\n");
            }
            else if ((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2))
            {
                printf("\nYou win!\n");
                playerScore++;
            }
            else
            {
                printf("\nComputer wins!\n");
                computerScore++;
            }
            printf("Score: %d - %d\n",playerScore,computerScore);
        }
        if(playerScore == 2)
        {
            printf("\n\t\t\t\t\t*** YOU WON THE MATCH! ***\n\n");
        }
        else
        {
            printf("\n\t\t\t\t\t*** COMPUTER WON THE MATCH! ***\n\n");
        }
        printf("Do you want to play again?\n");
        printf("1. Play Again\n");
        printf("2. Exit\n");
        printf("Enter option:");
        scanf("%d",&playAgainOption);
        while (playAgainOption != 1 && playAgainOption != 2){
	    printf("\nInvalid option! Please enter 1 or 2:");
        scanf("%d",&playAgainOption);
	}
    }
    printf("\nThanks for playing!");
    return 0;
}
