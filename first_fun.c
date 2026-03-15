#include<stdio.h>
int add();

int main(){
    add();
    return 0;

}

int add(int a,int b){
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    printf("%d + %d = %d",a,b,a+b);
}
