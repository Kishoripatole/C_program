#include<stdio.h>
int main()
{
    int n,n1,n2,n3;
    int one,two,three;
    int addition;
    int value;
    int Final_value;

    printf("Enter a number:");
    scanf("%d",&n);

    n1=n/100;
    n2=(n/10)%10;
    n3=(n%100)%10;
    
    one=n1*n1*n1;
    two=n2*n2*n2;
    three=n3*n3*n3;
     
    addition=one+two+three;
    value=n-addition;
    Final_value=addition+value;

    if(n%2!=0)
    {
        printf("Number is Armstrong.");
    }
    else
    {
        printf("Number is not Armstrong.");
    }
}