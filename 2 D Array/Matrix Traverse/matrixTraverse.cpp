#include<iostream>
#include<cstdio>
#define maxSize 100

using namespace std;

int main()
{
    int matrix[maxSize][maxSize], rowSize, columnSize;

    // Scanning the size of row of the matrix
    cout << "Enter the size of row of the matrix: ";
    cin >> rowSize;

    // Scanning the size of the column of matrix
    cout << "Enter the size of the row of matrix: ";
    cin >> columnSize;

    // Scanning the matrix
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<columnSize; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            cin >> matrix[i][j];            
        }
    }       

    // Printing the matrix
    cout << endl << endl;
    cout << "Matrix:" << endl;
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<columnSize; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}