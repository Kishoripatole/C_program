#include<stdio.h>
int main()
{
    int a,b,sum,sub,multi;
    printf("Enter number a=",a);
    scanf("%d",&a);
    printf("Enter number b=",b);
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    printf("\nAddtion=%d \nSubtraction=%d \nMultiplication=%d",sum,sub,multi);
    return 0;
}