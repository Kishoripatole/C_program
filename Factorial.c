#include<stdio.h>
int main()
{
    int n;
    int i;
    printf("Enter number:");
    scanf("%d",&n);
    
    int fact=1;
    for(i=1;i<=n;i++){
        fact =fact * i;
    }
    printf("Factorial of %d is:%d",n,fact);
    return 0;
}