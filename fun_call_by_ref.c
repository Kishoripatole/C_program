#include<stdio.h>
void change(int *a,int *b)
{
    int result;
    result=*a;
    *a=*b;
    *b=result;

}
int main()
{
    int a,b,result;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    change(&a,&b);
    printf("After swapping:a=%d ,b=%d",a,b,result);
    return 0;

}