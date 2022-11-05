// Program to print the sum of elements of the array

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

// function to compute and print the sum
void compute_print_sum(int array[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += array[i];
    }

    cout << "\nSUM: " << sum;
}

// driver function 
int main()
{
    int size, array[25];

    // scanning the number of elements of the array
    cout << "Enter the number of elements: ";
    cin >> size;

    // calling function to scan the array
    scan_array(array, size);

    // calling function to print the array
    print_array(array, size);

    // calling function to compute and print sum
    compute_print_sum(array, size);

    return 0;
}
