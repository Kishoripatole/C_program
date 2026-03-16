#include<stdio.h>
int main()
{
    char a1='1',a2='2',a3='3';
    char b1='4',b2='5',b3='6';
    char c1='7',c2='8',c3='9';

    int choice,move;
    char symbol;

    for(move=1;move<=9;move++)
    {
        if(move % 2==1)
        {
            printf("\nplayer 1 (X):");
            symbol='X';
        }
        else
        {
            printf("\nplayer 2 (o):");
            symbol='o';

        }
        
        scanf("%d",&choice);


        if(choice==1 && a1!='X' && a1!='o') a1=symbol;
        else if(choice==2 && a2!='X' && a2!='o') a2=symbol;
        else if(choice==3 && a3!='X' && a3!='o') a3=symbol;
        else if(choice==4 && b1!='X' && b1!='o') b1=symbol;
        else if(choice==5 && b2!='X' && b2!='o') b2=symbol;
        else if(choice==6 && b3!='X' && b3!='o') b3=symbol;
        else if(choice==7 && c1!='X' && c1!='o') c1=symbol;
        else if(choice==8 && c2!='X' && c2!='o') c2=symbol;
        else if(choice==9 && c3!='X' && c3!='o') c3=symbol;

        else
        {
            printf("Invalid move! try again");
            move--;
            continue;
        }
        
        printf("\n %c | %c | %c \n  %c | %c | %C \n %c | %C | %C "
            ,a1,a2,a3,b1,b2,b3,c1,c2,c3);

            if((a1==symbol && a2==symbol && a3==symbol)||
              (b1==symbol && b2==symbol && b3==symbol)||
              (c1==symbol && c2==symbol && c3==symbol)||
              (a1==symbol && b1==symbol && c1==symbol)||
              (a2==symbol && b2==symbol && c2==symbol)||
              (a3==symbol && b3==symbol && c3==symbol)||
              (a1==symbol && b2==symbol && c3==symbol)||
              (a3==symbol && b2==symbol && c1==symbol))
              
           {
            if(symbol=='X')
            {
                printf("\n player 1 wins!");
                return 0;
            }
            else
            {
            printf("\n player 2 wins!");
            return 0;
            }
    }
           
 
      }
      printf("\n Match draw!");
      return 0;

}
  


  


/*#include<stdio.h>
int main()
{
    char a1='1',a2='2',a3='3';
    char b1='4',b2='5',b3='6';
    char c1='7',c2='8',c3='9';

    int move,choice;
    char symbol;

    for (move=1;move<=9;move++)
    {
        if(move%2==1){
            printf("Player 1(X):");
            symbol='X';
        }
        else
        {
            printf("\nPlayer 2(o):");
            symbol='o';
        }
        scanf("%d",&choice);

        if(choice==1 && a1!='X' && a2!='o') a1=symbol;
        else if(choice==2 && a2!='X' && a2!='o') a2=symbol;
        else if(choice==3 && a3!='X' && a3!='o') a3=symbol;
        else if(choice==4 && b1!='X' && b1!='o') b1=symbol;
        else if(choice==5 && b2!='X' && b2!='o') b2=symbol;
        else if(choice==6 && b3!='X' && b3!='o') b3=symbol;
        else if(choice==7 && c1!='X' && c1!='o') c1=symbol;
        else if(choice==8 && c2!='X' && c2!='o') c2=symbol;
        else if(choice==9 && c3!='X' && c3!='o') c3=symbol;
        else
        {
            printf("Invalid move! tyr again");
            move--;
            continue;
        }
         
        
        printf("\n %c | %c | %c \n %c | %c | %c \n %c | %c | %c \n"
            ,a1,a2,a3,b1,b2,b3,c1,c2,c3);

        if((a1==symbol && a2==symbol && a3==symbol)||
           (b1==symbol && b2==symbol && b3==symbol)||
           (c1==symbol && c2==symbol && c3==symbol)||
           (a1==symbol && b1==symbol && c1==symbol)||
           (a2==symbol && b2==symbol && b3==symbol)||
           (a3==symbol && b3==symbol && c3==symbol)||
           (a1==symbol && b2==symbol && c3==symbol)||
           (a3==symbol && b2==symbol && c1==symbol))
           {
            if(symbol=='X')
            {
                printf("\n player 1 win!");
            }
            else
            {
                printf("\n player 2 win!");
                return 0;
            }
           }

    }
    printf("\n Match draw!");
    return 0;
    
    
}*/