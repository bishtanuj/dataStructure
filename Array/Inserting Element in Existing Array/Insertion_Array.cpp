// Program to insert the element in an existing array

#include<iostream>
#include<cstdio>
# define max_size 100

using namespace std;

int main()
{
    int array[max_size], size;
    int key, location;
    int temp;

    // Scanning the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Scanning the elements of the array
    cout << "Enter the " << size << "elements of array: " << endl;
    for(int i=0; i<size; i++)
    {
        printf("Element [%d]: ",i);
        cin >> array[i];
    }

    // Printing the array
    cout << "The elements of Array: " << endl;
    for(int i=0; i<size; i++)
    {
        printf("ELement [%d]: %d \n",i,array[i]);
    }

    // Scanning the location to add the element
    cout << "Enter the index of array to add the element: ";
    cin >> location;

    // Scanning the element to add at the given location
    cout << "Enter the element to insert at location " << location << ": ";
    cin >> key;

    // Transfering the size of array to another variable
    temp = size;

    // Increment of size of array
    size = size + 1;

    // Makes the location index empty
    while(temp >= location)
    {
        array[temp + 1] = array[temp];
        temp--;
    }

    // Transfer the key element into location index
    array[location] = key;

    // Printing the array after insertion
    cout << "Element of array after the insertion: " << endl;
    for(int i=0; i<size; i++)
    {
        printf("Element [%d]: %d \n",i,array[i]);
    }
}
