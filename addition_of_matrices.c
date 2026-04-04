#include<stdio.h>
int main()
{
    int rows,colns;
    int i,j;

    printf("Enter size of first matrix:");
    scanf("%d",&rows);
    printf("Enter size of second matrix:");
    scanf("%d",&colns);

    int A[rows][colns];
    int B[rows][colns];
    int C[rows][colns];

    printf("Enter elements of first matrix:");
    for(i=0;i<rows;i++){
        for(j=0;j<colns;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter elements of second matrix:");
    for(i=0;i<rows;i++){
        for(j=0;j<colns;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("\nAddition of matrix A and B:");
    for(i=0;i<rows;i++){
        for(j=0;j<colns;j++){
            C[i][j]=A[i][j]+B[i][j];
            
        }
        printf("\n");
    }
    printf("resultant matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<colns;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}