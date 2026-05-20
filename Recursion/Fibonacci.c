#include<stdio.h>
int fibonacci(int n);

int main()
{
     printf("Fibonacci of number:%d",fibonacci(8));
     return 0;
}

int fibonacci(int n)
{
    int fib_Nm_1= fibonacci(n-1);
    int fib_Nm_2= fibonacci(n-2);
    int fibN=fib_Nm_1 + fib_Nm_2;
}

