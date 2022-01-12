// Program to update the existiong array

#include<iostream>
#include<cstdio>
#define max_size 100

using namespace std;

int main()
{
    int array[max_size], size;
    int index, x;

    // Scanning the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Scanning the elements of array
    cout << "Enter the elements of array: " << endl;
    for(int i=0; i<size; i++)
    {
        printf("Element [%d]: ",i);
        cin >> array[i];
    }

    // Printing the array
    cout << "the elements of array: " << endl;
    for(int i=0; i<size; i++)
    {
        printf("Element [%d]: %d\n",i,array[i]);
    }

    // Scanning the index of array at which value changes
    cout << "Enter the index of the array to change the value: ";
    cin >> index;

    // Scanning the new value at the given index
    cout << "Enter the value to save at " << index << " index of array: ";
    cin >> x;

    // Inserting the value at the index
    array[index] = x;

    // Printing the updated array
    cout << "The updated array: " << endl;
    for(int i=0; i<size; i++)
    {
        printf("Element [%d]: %d \n",i,array[i]);
    }

    return 0;
}