#include<stdio.h>
int main()
{
    char a1='1',a2='2',a3='3';
    char b1='4',b2='5',b3='6';
    char c1='7',c2='8',c3='9';

    int choice;

    printf("Player 1 (X):");
    scanf("%d",&choice);

    // Move 1

    if((choice==1),a1='X');
    else if(choice==2,a2='X');
    else if(choice==3,a3='X');
    else if(choice==4,b1='X');
    else if(choice==5,b2='X');
    else if(choice==6,b3='X');
    else if(choice==7,c1='X');
    else if(choice==8,c2='X');
    else if(choice==9,c3='X');


   printf(" \n %c | %c | %c |\n %c | %c | %c |\n %c | %c | %c | \n " 
            ,a1,a2,a3,b1,b2,b3,c1,c2,c3);



    // Move 2
    printf("Player 2 (O):");
    scanf("%d",&choice);


    if((choice==1),a1='O');
    else if(choice==2,a2='O');
    else if(choice==3,a3='O');
    else if(choice==4,b1='O');
    else if(choice==5,b2='O');
    else if(choice==6,b3='O');
    else if(choice==7,c1='O');
    else if(choice==8,c2='O');
    else if(choice==9,c3='O');


    printf(" \n %c | %c | %c |\n %c | %c | %c |\n %c | %c | %c | \n " 
            ,a1,a2,a3,b1,b2,b3,c1,c2,c3);



    //Move 3
    printf("Player 1 (X):");
    scanf("%d",&choice);

        

    if((choice==1),a1='X');
    else if(choice==2,a2='X');
    else if(choice==3,a3='X');
    else if(choice==4,b1='X');
    else if(choice==5,b2='X');
    else if(choice==6,b3='X');
    else if(choice==7,c1='X');
    else if(choice==8,c2='X');
    else if(choice==9,c3='X');
    
      printf(" \n %c | %c | %c |\n %c | %c | %c |\n %c | %c | %c | \n " 
            ,a1,a2,a3,b1,b2,b3,c1,c2,c3);
    

    //move 4
     printf("Player 2 (O):");
    scanf("%d",&choice);

     

    if((choice==1),a1='O');
    else if(choice==2,a2='O');
    else if(choice==3,a3='O');
    else if(choice==4,b1='O');
    else if(choice==5,b2='O');
    else if(choice==6,b3='O');
    else if(choice==7,c1='O');
    else if(choice==8,c2='O');
    else if(choice==9,c3='O');
     
    
    printf(" \n %c | %c | %c |\n %c | %c | %c |\n %c | %c | %c | \n " 
            ,a1,a2,a3,b1,b2,b3,c1,c2,c3);

     //Move 5

    printf("\nPlayer 1 (X):");
    scanf("%d",&choice);

    
        
    if((choice==1),a1='X');
    else if(choice==2,a2='X');
    else if(choice==3,a3='X');
    else if(choice==4,b1='X');
    else if(choice==5,b2='X');
    else if(choice==6,b3='X');
    else if(choice==7,c1='X');
    else if(choice==8,c2='X');
    else if(choice==9,c3='X');

    printf(" \n %c | %c | %c |\n %c | %c | %c |\n %c | %c | %c | \n " 
            ,a1,a2,a3,b1,b2,b3,c1,c2,c3);

 
        
    if((a1=='X' && a2=='X' && a3=='X') || (b1=='X' && b2=='X' && b3=='X')||
       (c1=='X' && c2=='X' && c3=='X') || (a1=='X' && b1=='X' && c1=='X')||
        (a2=='X' && b2=='X' && c2=='X')|| (a3=='X' && b3=='X' && c3=='X')||
        (a1=='X' && b2=='X' && c3=='X')|| (a3=='X' && b2=='X' && c1=='X'))
        
        {
        
            printf("player 1 win!");
        }
        return 0;
        
        //Move 6

        printf("Player 2 (O):");
        scanf("%d",&choice);


        

    if((choice==1),a1='O');
    else if(choice==2,a2='O');
    else if(choice==3,a3='O');
    else if(choice==4,b1='O');
    else if(choice==5,b2='O');
    else if(choice==6,b3='O');
    else if(choice==7,c1='O');
    else if(choice==8,c2='O');
    else if(choice==9,c3='O');
    
    printf(" \n %c | %c | %c |\n %c | %c | %c |\n %c | %c | %c | \n "
            ,a1,a2,a3,b1,b2,b3,c1,c2,c3);



    if((a1=='O' && a2=='O' && a3=='O') || (b1=='O' && b2=='O' && b3=='O')||
       (c1=='O' && c2=='O' && c3=='O') || (a1=='O' && b1=='O' && c1=='O')||
       (a2=='O' && b2=='O' && c2=='O') || (a3=='O' && b3=='O' && c3=='O')||
       (a1=='O' && b2=='O' && c3=='O') || (a3=='O' && b2=='O' && c1=='O'))
        {
        
            printf("player 2 win!");
        }
        return 0;

        //Move 7
        printf("Player 1 (X):");
        scanf("%d",&choice);

    

    if((choice==1),a1='X');
    else if(choice==2,a2='X');
    else if(choice==3,a3='X');
    else if(choice==4,b1='X');
    else if(choice==5,b2='X');
    else if(choice==6,b3='X');
    else if(choice==7,c1='X');
    else if(choice==8,c2='X');
    else if(choice==9,c3='X'); 

    printf("\n %c | %c | %c |\n %c | %c | %c |\n %c | %c | %c |\n "
             ,a1,a2,a3,b1,b2,b3,c1,c2,c3);

    if((a1=='X' && a2=='X' && a3=='X') || (b1=='X' && b2=='X' && b3=='X')||
       (c1=='X' && c2=='X' && c3=='X') || (a1=='X' && b1=='X' && c1=='X')||
        (a2=='X' && b2=='X' && c2=='X')|| (a3=='X' && b3=='X' && c3=='X')||
        (a1=='X' && b2=='X' && c3=='X')|| (a3=='X' && b2=='X' && c1=='X'))
        
        {
        
            printf("player 1 win!");
        }
        return 0;

        //Move 8
        printf("Player 2 (O):");
        scanf("%d",&choice);



    if((choice==1),a1='O');
    else if(choice==2,a2='O');
    else if(choice==3,a3='O');
    else if(choice==4,b1='O');
    else if(choice==5,b2='O');
    else if(choice==6,b3='O');
    else if(choice==7,c1='O');
    else if(choice==8,c2='O');
    else if(choice==9,c3='O')

    printf(" \n %c | %c | %c |\n %c | %c | %c |\n %c | %c | %c | \n "
        ,a1,a2,a3,b1,b2,b3,c1,c2,c3);

       if((a1=='O' && a2=='O' && a3=='O') || (b1=='O' && b2=='O' && b3=='O')||
          (c1=='O' && c2=='O' && c3=='O') || (a1=='O' && b1=='O' && c1=='O')||
          (a2=='O' && b2=='O' && c2=='O') || (a3=='O' && b3=='O' && c3=='O')||
          (a1=='O' && b2=='O' && c3=='O') || (a3=='O' && b2=='O' && c1=='O'))
        {

            printf("player 2 win!\n");
        }
        return 0;
      // Move 9
        printf("Player 1 (X):");
        scanf("%d",&choice);

    

    if((choice==1),a1='X');
    else if(choice==2,a2='X');
    else if(choice==3,a3='X');
    else if(choice==4,b1='X');
    else if(choice==5,b2='X');
    else if(choice==6,b3='X');
    else if(choice==7,c1='X');
    else if(choice==8,c2='X');
    else if(choice==9,c3='X'); 

    printf(" \n %c | %c | %c |\n %c | %c | %c |\n %c | %c | %c | \n "
                      ,a1,a2,a3,b1,b2,b3,c1,c2,c3);

        if((a1=='X' && a2=='X' && a3=='X') || (b1=='X' && b2=='X' && b3=='X')||
           (c1=='X' && c2=='X' && c3=='X') || (a1=='X' && b1=='X' && c1=='X')||
           (a2=='X' && b2=='X' && c2=='X')|| (a3=='X' && b3=='X' && c3=='X')||
           (a1=='X' && b2=='X' && c3=='X')|| (a3=='X' && b2=='X' && c1=='X'))
        {
        
            printf("player 1 win!");
        }
        printf("Match draw");
        return 0;

}
    



