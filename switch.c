/*#include<stdio.h>
int main()
{
    int n1,n2;
    char operator;
    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);
    printf("Enter operator:");
    scanf(" %c",&operator);//this program is not running without taking space before %c
    //enter operator is not showing 

    switch(operator)
    {
        case '+':
        printf("\nAddition:%d",n1+n2);
        break;
        case '-':
        printf("\nSubtraction:%d",n1-n2);
        break;
        case '*':
        printf("\nMultiplication:%d",n1*n2);
        break;
        case '/':
        printf("\nDivision:%d",n1/n2);
        break;
        default:
        printf("\nEnter valid operator.");
    }
}*/




/*#include<stdio.h>
int main ()
{
    int day;
    printf("Enter day:");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf("monday.\n");
        break;
        case 2:
        printf("tuesday.\n");
        break;
        case 3:
        printf("wednesday.\n");
        break;
        case 4:
        printf("thursday.\n");
        break;
        case 5:
        printf("friday.\n");
        break;
        case 6:
        printf("saturday.\n");
        break;
        case 7:
        printf("sunday!\n");
        break;
        default:
        printf("Enter valid day..!\n");
    }
}*/



#include<stdio.h>
int main()
{
    int x=25,y=20;
     switch(x>y && x+y>0)
     {
        case 1:
        printf("Hi!");
        break;
        case 0:
        printf("bye.");
        break;
        default:
        printf("hello bye.");
     }

}