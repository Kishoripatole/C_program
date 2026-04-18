#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="Hello";
    char str2[20];
    printf("Enter string 1:");
    gets(str1);
    strcpy(str2,str1);
    printf("Copies firt string to another:%s ",str2);
}