#include<stdio.h>
int main()
{
    int i,j;
    int arr[5];
    int temp;


    
    printf("Enter array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nprinting array elements before sorting:");


    for(i=0;i<5;i++)
    {
        printf("\narr[%d]=%d",i,arr[i]);

    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[j]<arr[i]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    
    printf("\nArray elements after swapping in ascending order:");

     for(i=0;i<5;i++)
    {
        printf("\narr[%d]=%d",i,arr[i]);

    }
}
    
    
       for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[j]>arr[i]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    printf("\nArray elements after swapping in descending  order:");
     for(i=0;i<5;i++)
    {
        printf("\narr[%d]=%d",i,arr[i]);

    }
    
}
return 0;
}