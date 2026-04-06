#include<stdio.h>
int minarray(int arr[],int size)
{
    int i=0;
    int min=arr[0];
    for(i=1;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }   
    }
    return min;
}
int main()
{
    int i=0;
    int min=0;
    int number[]={4,9,2,3,4,5,6,10};
    min = minarray(number,8);
    printf("Minimum number is=%d",min);
    return 0;
}
