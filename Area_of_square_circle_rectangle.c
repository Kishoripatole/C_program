#include<stdio.h>

#define PI 3.14
int square(int a);
float circle(float r);
int rectangle(int l,int b);

int main()
{
    int n;
    int l;
    printf("Enter two number:");
    scanf("%d%d",&n,&l);

    int s=square(n);
    printf("%d\n",s);

    float p=circle(l);
    printf("%f\n",p);
}

int square(int a)
{
    return a*a;
}

float circle(float r)
{
    return PI *r*r;
}

int rectangle(int l,int b)
{
    return l*b;
}