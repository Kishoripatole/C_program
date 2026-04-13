#include<stdio.h>
int Armstrong_num(int n,int addition);
int main()
{
    int n,n1,n2,n3;
    int one,two,three;
    int addition;
    printf("Enter an integer:");
    scanf("%d",&n);
    
    n1=n/100;
    n2=(n/10)%10;
    n3=(n%100)%10;

    one=n1*n1*n1;
    two=n2*n2*n2;
    three=n3*n3*n3;
    addition=one+two+three;
    Armstrong_num( n, addition);

    return 0;
  
}
int Armstrong_num(int n,int addition)
{
    
     if(addition==n)
    {
        printf("Number is Armstrong.");
    }
    else
    {
        printf("Number is not Armstrong.");
    }
    return 0;
}