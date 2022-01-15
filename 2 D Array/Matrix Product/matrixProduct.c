// Program to compute the product of two matrices

#include<stdio.h>
#define maxSize 100
int main()
{
    int matrixOne[maxSize][maxSize], size;
    int matrixTwo[maxSize][maxSize];
    int product[maxSize][maxSize];

    // Scanning the size of the matrix 
    printf("Enter the size of matrix: ");
    scanf("%d",&size);

    // Scanning the matrix I
    printf("Enter the elements of matrix I:\n");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&matrixOne[i][j]);
        }
    }

    // Scanning the matrix II
    printf("Enter the elements of matrix II:\n");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&matrixTwo[i][j]);
        }
    }

    // Printing matrix I
    printf("Matrix I: \n");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("%d ",matrixOne[i][j]);
        }
        printf("\n");
    } 

    // Printing matrix II
    printf("Matrix II: \n");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("%d ",matrixTwo[i][j]);
        }
        printf("\n");
    } 

    // Computing the product
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            product[i][j] = 0;
            for(int k=0; k<size; k++)
            {
                product[i][j] += matrixOne[i][k] * matrixTwo[k][j];
            }
        }
    }

    // Printing the product of the matrices
    printf("PRODUCT OF MATRICES: \n");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
