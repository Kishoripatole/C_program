#include<stdio.h>
int palindrome();
int main()
{
  palindrome();
  return 0;
}
int palindrome()
{
  int n,n1,n2,n3,reverse;
  printf("Enter an integer:");
  scanf("%d",&n);
 n1=n/100;
 n2=(n/10)%10;
 n3=(n%100)%10;
 reverse=(n1*100)+(n2*10)+n1;
 if(reverse==n)
{
   printf("Number is palindrome.");
}
else
{
   printf("Number is not palindrome.");
}
return 0;
}



