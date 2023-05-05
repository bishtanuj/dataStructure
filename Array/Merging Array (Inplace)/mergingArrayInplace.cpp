/******************************************************************************
           Program to print the merged array without using third array
******************************************************************************/
#include<iostream>
#include<cstdio>
#define maxSize 100

using namespace std;

int main()
{
    int arrayOne[maxSize], sizeOne;
    int arrayTwo[maxSize], sizeTwo;
    int temp;

    // Scanning the size of the array I
    cout << "Enter the size of the array I: ";
    cin >> sizeOne;

    // Scanning the array I of sizeOne
    cout << "Enter the " << sizeOne << " elements of array I: " << endl;
    for(int i=0; i<sizeOne; i++)
    {
        printf("Element [%d]: ",i);
        cin >> arrayOne[i];
    }

    // Scanning the size of the array II
    cout << "Enter the size of the array II: ";
    cin >> sizeTwo;

    // Scanning the array II of sizeTwo
    cout << "Enter the " << sizeTwo << " eleemts of array II:" << endl;
    for(int i=0; i<sizeTwo; i++)
    {
        printf("Element [%d]: ",i);
        cin >> arrayTwo[i];
    }

    // Assigning the last element of I array to the temp variable
    temp = arrayOne[sizeOne];

    // Size of array I is converted as follows
    sizeOne += sizeTwo;

    // Merging the array I and array II in array I
    for(int i=0; i<sizeOne; i++)
    {
        if(arrayOne[i] == temp)
        {
            for(int j=0; j<sizeTwo; j++)
            {
                arrayOne[i++] = arrayTwo[j];
            }
        }
    }

    // Printing the merged array
    cout << "Merged Array: " << endl;
    for(int i=0; i<sizeOne; i++)
    {
        cout << arrayOne[i] << " ";
    } 

    return 0;
}
