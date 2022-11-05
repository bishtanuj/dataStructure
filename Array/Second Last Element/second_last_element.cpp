// program to print the second last element of the array

#include<iostream>

using namespace std;

// function to scan the elements of array
void scan_array(int array[], int size)
{
    cout << "Enter the elements of the array: \n";
    for(int i=0; i<size; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> array[i];
    }
}

// function to print the array
void print_array(int array[], int size)
{
    cout << "Array: ";
    for(int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
}

// function to find and print second last element of array
void second_last_element(int array[], int size)
{
    int element = array[size - 2];

    cout << "\nSecond last element: " << element;
}

// driver function
int main()
{
    int size, array[30];

    // scanning the number of elements of array
    cout << "Enter the number of elements of the array: ";
    cin >> size;

    // calling the function to scan the elements of array
    scan_array(array, size);

    // calling the function to print the array
    print_array(array, size);

    // calling the function to compute and print the second last element
    second_last_element(array, size);

    return 0;
}
