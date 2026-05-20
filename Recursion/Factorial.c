#include<stdio.h>
int fact(int n);

int main(){
    int n;
    printf("Factorial is :%d",fact(5));
    return 0;

}

int fact(int n){
    
    if (n==1)
    return 1;
    
    int factNm1= fact(n-1);
    int fact = factNm1 *n;
   // int fact= fact(n-1)*n;
    return fact;
}