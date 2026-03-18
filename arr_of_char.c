#include<stdio.h>
int main()
{
    int i;
    char a[6];
    a[0]='A';
    a[1]='B';
    a[2]='C';
    a[3]='D';
    a[4]='E';
    a[5]='F';


    for(i=0;i<6;i++)
    {
        printf("%c ",a[i]);
    }
}