#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the size of array:\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];


    printf("enter array elements:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }

    }
    printf("printing 2D array: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        printf("%d ",arr[i][j]);
        }
        printf("\n");

    }
    
    
    return 0;
}
    

    