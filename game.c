
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int playerChoice, computerChoice;

//     // Seed random number generator
//     srand(time(0));

//     printf("Rock-Paper-Scissors Game\n");
//     printf("Enter your choice:\n");
//     printf("1. Rock\n2. Paper\n3. Scissors\n");
//     printf("Your move: ");
//     scanf("%d", &playerChoice);

//     // Generate computer choice (1–3)
//     computerChoice = (rand() % 3) + 1;

//     // Show choices
//     printf("You chose: %d\n", playerChoice);
//     printf("Computer chose: %d\n", computerChoice);

//     // Decide winner
//     if (playerChoice == computerChoice) {
//         printf("It's a draw!\n");
//     } else if ((playerChoice == 1 && computerChoice == 3) ||
//                (playerChoice == 2 && computerChoice == 1) ||
//                (playerChoice == 3 && computerChoice == 2)) {
//         printf("You win!\n");
//     } else {
//         printf("Computer wins!\n");
//     }

//     return 0;
// }






// #include <stdio.h>

// int main() {
//     int player1, player2;

//     printf("Rock-Paper-Scissors Game (Two Players)\n");
//     printf("\nChoices: 1 = Rock \n 2 = Paper \n 3 = Scissors\n");

//     // Player 1 input
//     printf("Player 1, enter your choice: ");
//     scanf("%d", &player1);

//     // Player 2 input
//     printf("Player 2, enter your choice: ");
//     scanf("%d", &player2);

//     // Show choices
//     printf("Player 1 chose: %d\n", player1);
//     printf("Player 2 chose: %d\n", player2);

//     // Decide winner
//     if (player1 == player2) {
//         printf("It's a draw!\n");
//     } else if ((player1 == 1 && player2 == 3) ||
//                (player1 == 2 && player2 == 1) ||
//                (player1 == 3 && player2 == 2)) {
//         printf("Player 1 wins!\n");
//     } else {
//         printf("Player 2 wins!\n");
//     }

//     return 0;
// }




    
// #include<stdio.h>
// int main()
// {
//     int u1,u2;
    
//     printf("\n1.rock \n 2.paper \n 3.scissor\n");
//     printf("Enter your choice:");
//     scanf("%d%d",&u1,&u2);

    
//     if(u1==u2){
//         printf("it's a draw.");
//     }
//     else if ((1==3 && 2==1 ) || (1==1 && 2==2  ) || (1==2 && 2==1)){
//         printf("player 1 wins! ");
//     }f("player 2 wins!");
//     }





/*#include<stdio.h>
int main()
{
    int u1,u2,case1,case2;
    printf("1.X \n 2.O \n 3.X \n 4.O \n 5.X \n 6.O \n 7.X \n 8.O \n 9.X \n ");
    printf("Enter player 1 choice :");
    scanf("%d",&u1);

    printf("Enter player 2 choice :");
    scanf("%d",&u2);

    case1=((1==1 && 2==2) || (1==3 && 2==4) || (1==5 && 2==0));
    case2=((2==2 && 1==1) || (2==4 && 1==5) || (2==6 && 1==0));

    if(case1){
        printf("player 1 wins!");
    }
    else if(case2){
        printf("player 2 wins!");
    }
    else{
        printf("both will lose.");
    }
}*/





#include<stdio.h>
int main()
{
    int u1 ,u2,case1,case2;
    printf("\n 1.X \n 2.O");
    printf("Enter player 1 three choices:");
    scanf("%d",&u1);

    printf("Enter player 2 three choices:");
    scanf("%d",&u2);

     case1=((u1==1 && u2==2) || (u1==1 && u2==2) ||
                          );
}

