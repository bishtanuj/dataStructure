// Program to compute the addition of two matrices

#include<iostream>
#include<cstdio>
#define maxSize 100

using namespace std;

int main()
{
    int matrixOne[maxSize][maxSize], size;
    int matrixTwo[maxSize][maxSize];
    int sum[maxSize][maxSize];

    // Scanning the size of the matrix
    cout << "Enter the size of the matrix: ";
    cin >> size;

    // Scanning the elements of the matrix I
    cout << "Enter the elements of matrix I: " << endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("ELement [%d][%d]: ",i,j);
            cin >> matrixOne[i][j];
        }
    }

    // Scanning the elements of matrix II
    cout << "Enter the elements of matrix II: " << endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("ELement [%d][%d]: ",i,j);
            cin >> matrixTwo[i][j];
        }
    }

    // Printing the matrix I
    cout << "Matrix I: " << endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout << matrixOne[i][j] << " ";
        }
        cout << endl;
    }

    // Printing the matrix II
    cout << "Matrix II: " << endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout << matrixTwo[i][j] << " ";
        }
        cout << endl;
    }

    // Computing the sum of the matrices
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            sum[i][j] = matrixOne[i][j] + matrixTwo[i][j];
        }
    }

    // Printing the sum of matrices
    cout << "Sum: " << endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
