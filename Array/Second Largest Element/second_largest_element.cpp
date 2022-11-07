// Program to print the second largest element in array

#include<iostream>
#include<utility>
#include<algorithm>

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

// function to compute and print the second largest element of array
void second_largest_element(int array[], int size)
{
    // sort the array
    std::sort(array, array+size);

    // printing the second largest element
    cout << "\nSecond Largest Element: " << array[size - 2];
}

// driver function
int main()
{
    int size, array[30];

    // scanning the number of elements of the array
    cout << "Enter the number of elemnts of the array: ";
    cin >> size;

    // calling function to scan the array
    scan_array(array, size);

    // calling function to print the array
    print_array(array, size);

    // calling the function to print the second largest element of the array
    second_largest_element(array, size);

    return 0;
}
