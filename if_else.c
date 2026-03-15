// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter a number:");
//     scanf("%d",&num);

//     if(num>0)
//     {
//         printf("the number is positive.");
//     }
//     else
//     printf("the number is negative.");
// }



#include<stdio.h>
int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("The number is even.");
    }
    else
    printf("The number is odd.");
    return 0;
}



  //Without using %(module)sign.
  // #include<stdio.h>
  // int main()
  // {
  //   int num;
  //   printf("Enter a number:");
  //   scanf("%d",&num);

  //   if((num/2)*2==num)
  //   {
  //       printf("the number is even.");
  //   }
  //   else
  //   printf("the number is odd.");
  //   return 0;

  // } 

// #include<stdio.h>
// int main()
// {
//   int num;
//   printf("Enter number:");
//   scanf("%d",&num);

//   if(num&1){
//     printf("the number is odd.");
//   }
//   else
//   printf("the number is even.");
//   return 0;
// }