#include<stdio.h>
int largestnum(int arr[],int size)
{
    int i=0;
    int max=arr[0];
    for(i=1;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }   
    }
    return max;
}
int main()
{
    
    int max=0;
    int number[]={4,9,2,3,4,5,6,10};
    max = largestnum(number,8);
    printf("Maximum number is=%d\n",max);
    return 0;
}
