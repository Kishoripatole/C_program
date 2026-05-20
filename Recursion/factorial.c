#include<stdio.h>
int factorial(int n);

int main()
{
    int num,result;
    printf("enter number:");
    scanf("%d",&num);

    result=factorial(num);
    printf("factorial is :%d\n",result);
}


int factorial(int n)
{
    if(n==1){
    return 1;
    }
    else
    {
        return n*factorial(n-1);
    }

}

