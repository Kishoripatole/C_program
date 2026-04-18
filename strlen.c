#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter string:");
    gets(str);

    printf("Lenght of string:%d",strlen(str));
}