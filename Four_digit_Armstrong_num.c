#include<stdio.h>
int main()
{
    int n,n1,n2,n3,n4;
    int one,two,three,four;
    int addition;
    

    printf("Enter a number:");
    scanf("%d",&n);

    n1=n/1000;
    n2=(n/100)%10;
    n3=(n/10)%10;
    n4=(n%10);
    
    one=n1*n1*n1*n1;
    two=n2*n2*n2*n2;
    three=n3*n3*n3*n3;
    four=n4*n4*n4*n4;
     
    addition=one+two+three+four;
    
    

    if(addition==n)
    {
        printf("Number is Armstrong.");
    }
    else
    {
        printf("Number is not Armstrong.");
    }
}