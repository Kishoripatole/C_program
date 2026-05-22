#include<stdio.h>
#include<math.h>
int squareofn(int n);

int main()
{
    int n=26;
    int s=squareofn(n);
    
    printf("%d",s);

}

int squareofn(int n)
{
      return pow(n,2);
}