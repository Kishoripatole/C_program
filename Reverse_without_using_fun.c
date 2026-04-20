#include<stdio.h>
int main()
{
    char str[20];
    int i=0;
    int len=0;
    
    printf("Enter string:");
    gets(str);

    while(str[len] !='\0')
    {
        len++;
    }

    printf("Reverse of string is:");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;

}