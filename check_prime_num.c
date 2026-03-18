#include<stdio.h>
int prime(int n);

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    if(prime(n))
    {
        printf("The number is prime.");
    }
    else
    {
        printf("The number is not prime.");
    }
    return 0;

}

int prime(int n)
{
    int i;

    if(n<=1) return 0;
    if(n==2) return 1;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return 0;

    }
    return 1;
}