#include<stdio.h>
int mian()
{
    int i;
    int a[6];
    
    printf("Enter array elements:");

    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}