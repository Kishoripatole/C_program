//This questions taken from programiz.
// Q16.Program to Check Whether a Character is an Alphabet or not
// #include<stdio.h>
// int main()
// {
//     int ch,case1,case2;
//     printf("Enter a character:",ch);
//     scanf("%c",&ch);

//     case1=(ch>='a'&& ch<='z');
//     case2=(ch>='A' && ch<='Z');

//     if(case1 || case2){
//         printf("The character  is an alphabet.");
//     }
//     else
//     printf("The character  is not an alphabet.");
    
// }





// Q11.Program to Check Whether a Character is a Vowel or Consonant
// #include<stdio.h>
// int main()
// {
//     int ch,lowercase_vowels,uppercase_vowels;
//     printf("Enter an alphabet:");
//     scanf("%c",&ch);

//     lowercase_vowels=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
//     uppercase_vowels=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
     
//     if(lowercase_vowels || uppercase_vowels){
//         printf("The character %c is a vowel.");
//     }
//     else
//     printf("The character %c is a consonant.");
// }




// Q12.Program to Find the Largest Number Among Three Numbers,by using "if-else-if".
// #include<stdio.h>
// int main()
// {
//     int num1,num2,num3,case1,case2,case3;
//     printf("Enter three numbers:");
//     scanf("%d%d%d",&num1,&num2,&num3);

//     case1=(num1>num2 && num1>num3);
//     case2=(num2>num1 && num2>num3);
//     case3=(num3>num1 && num3>num2);

//     if(case1 ){
//         printf("the number %d is largest.",num1);
//     }
    
//     else if(case2){
//     printf("the number %d is largest",num2);
//     }
//     else if(case3){
//     printf("the number %c is largest",num3);
//     }
//     else
//     printf("all are equal.");
// }



// Q14.Program to Check Leap Year
// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("Enter year:");
//     scanf("%d",&year);

//     if(year%4==0){
//         printf("this is leap year.");
//     }
//     else
//     printf("this is not leap year.");
// }



