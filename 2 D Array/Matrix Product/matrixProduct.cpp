// Program to compute the product of two matrices

#include<iostream>
#include<cstdio>
#define maxSize 100

using namespace std;

int main()
{
    int matrixOne[maxSize][maxSize], size;
    int matrixTwo[maxSize][maxSize];
    int product[maxSize][maxSize];

    // Scanning the size of the matrix
    cout << "Enter the size of matrix: ";
    cin >> size;

    // Scanning the matrix I
    cout << "Enter the elements of matrix I: " << endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            cin >> matrixOne[i][j];
        }
    }

    // Scanning the matrix II
    cout << "Enter the elements of matrix II:" << endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            cin >> matrixTwo[i][j];
        }
    }

    // Printing matrix I
    cout << "Matrix I: " << endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout << matrixOne[i][j] << " ";
        }
        cout << endl;
    } 

    // Printing matrix II
    cout << "Matrix II: " << endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout << matrixTwo[i][j] << " ";
        }
        cout << endl;
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
    cout << "PRODUCT OF MATRICES: " << endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
