// program to print the product of the elements of array

#include<iostream>

using namespace std;

// function to scan the elements of the array
void scan_array(int array[], int size)
{
    cout << "Enter the elements of the array: \n";
    for(int i=0; i<size; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> array[i];
    }
}

// function to print the elements of the array
void print_array(int array[], int size)
{
    cout << "Array: ";
    for(int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
}

// function to compute and print the product of elements of array
void compute_print_product(int array[], int size)
{
    int product = 1;
    for(int i=0; i<size; i++)
    {
        product *= array[i];
    }

    cout << "\nProduct: " << product;
}

// driver function
int main()
{
    int size, array[30];

    cout << "Enter the number of elements in array: ";
    cin >> size;

    // calling function scan the array
    scan_array(array, size);

    // calling function to print the array
    print_array(array, size);

    // calling the function to compute and print product
    compute_print_product(array, size);

    return 0;
}
