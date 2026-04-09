#include<stdio.h>
void Namste();
void Bonjour(); 

int main()
{
    char ch;
    printf("Enter F for french and I for india:");
    scanf("%c",&ch);

    if(ch=='I')
    {
        Namste();
    }
    else
    {
        Bonjour();
    }

}

void Namste()
{
    printf("Namste .....!\n");
}

void Bonjour()
{
    printf("Bonjour....!!!\n");
}