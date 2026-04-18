#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    
    printf("Concatenation of strings are:%s",strcat(str1,str2));

}