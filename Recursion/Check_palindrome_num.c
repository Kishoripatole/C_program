#include<stdio.h>
int palindrome();

int main()
{
     
    palindrome();
   return 0;
}

int palindrome()
{
    int n,n1,n2,n3,reverse;
    printf("Enter number:");
    scanf("%d",&n);
   
    n1=n/100;
    n2=(n/10)%10;
    n3=(n%100)%10;
    reverse=(n3*100)+(n2*10)+n1;
    if(reverse==n)
    {
        printf("This Number is palindrome.");
    }
    else
    {
        printf("This Number is not palindrome.");
    }
    return 0;

     
}




// #include <stdio.h>

// int main() {
//     int num, original, reversed = 0, digit;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     original = num;  // store original number

//     while (num != 0) {
//         digit = num % 10;            // get last digit
//         reversed = reversed * 10 + digit; // build reversed number
//         num /= 10;                   // remove last digit
//     }

//     if (original == reversed)
//         printf("%d is a palindrome.\n", original);
//     else
//         printf("%d is not a palindrome.\n", original);

//     return 0;
// }
