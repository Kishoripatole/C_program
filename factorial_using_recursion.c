#include<stdio.h>
int factorial(int n)
{
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){

    int num,result;
    printf("Enter number:");
    scanf("%d",&num);
    result=factorial(num);

    printf("Factorial =%d ",result);

}