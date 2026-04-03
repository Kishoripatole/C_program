#include<stdio.h>
int main()
{
    int m,n,i;
    int sum=0;
    int sum1=0,sum2=0,add;
    printf("Enter size of first array:");
    scanf("%d",&n);
    int arr1[n];
    
    

    printf("Enter size of second array:");
    scanf("%d",&n);
    int arr3[n];

    int arr2[n];

    printf("Enter elements of array1:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter elements of array2:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("\nprint elements of array 1:");
    for(i=0;i<=n;i++)
    {
        printf("\narr1[%d]=%d",i,arr1[i]);
    }
    printf("\nprint elements of array 2:");
    for(i=0;i<=n;i++)
    {
        printf("\narr2[%d]=%d",i,arr2[i]);
    }

    printf("\naddition of arr1 and arr2:");
    for(i=0;i<=n;i++){
        arr3[i]=arr1[i]+arr2[i];

    }
     for(i=0;i<=n;i++){
        printf("\n%d\t",arr3[i]);

    }
    
}    
    
    