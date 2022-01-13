/******************************************************************************
            Program to compute the smallest element in array
******************************************************************************/
#include<iostream>
#include<cstdio>
#define maxSize 100
using namespace std;

int main()
{
    int array[maxSize], size;
    int min;

    // Scanning the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Scanning the elements of the array
    cout << "Enter the " << size << " elements of the array: " << endl;
    for(int i=0; i<size; i++)
    {
        printf("ELement [%d]: ",i);
        cin >> array[i];
    }

    // Printing the elements of the array
    cout << "The input array: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }

    // Assigning the first element of the array to min variable
    min = array[0];

    // Checking for elements minimum than value of min variable
    for(int i=0; i<size; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    // Printing out the result
    cout << "\nThe smallest element of input array: " << min << endl;

    return 0;
}
