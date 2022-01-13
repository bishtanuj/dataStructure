#include<stdio.h>
#define maxSize 100

int main()
{
    int matrix[maxSize][maxSize], rowSize, columnSize;

    // Scanning the size of row of the matrix
    printf("Enter the size of row of the matrix: ");
    scanf("%d",&rowSize);

    // Scanning the size of column of the matrix
    printf("Enter the size of column of the matrix: ");
    scanf("%d",&columnSize);    

    // Scanning the elements of matrix
    printf("Enter the elements of matrix: \n");
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<columnSize; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    // Printing the matrix
    printf("\n\n");
    printf("Matrix: \n");
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<columnSize; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
