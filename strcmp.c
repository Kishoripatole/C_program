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
    char compare = strcmp(str1,str2);
    if(compare==0)
    {
        printf("Strings are equal.");
    }
    else
    {
        printf("Strings are not equal.");
    }
    return 0;

}