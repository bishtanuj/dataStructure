// Program to search the element in array using binary search

#include<iostream>
#define maxSize 100

using namespace std;

// Function to perform binary search
int binarySearch(int array[], int size, int low, int mid, int high, int key)
{
    low = 0;
    high = size;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(array[mid] == key)
        {
            return mid;
        }
        else if(key > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int array[maxSize], size, result;
    int key, low, mid, high;

    // Scanning the sie of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Scanning the elements of array
    cout << "Enter the " << size << " elements of array: " << endl;
    for(int i=0 ; i<size; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> array[i];
    }

    // Scanning the key element to find in array
    cout << "Enter the element to search in array: ";
    cin >> key;

    // Calling binarySearch function
    result = binarySearch(array,size,low,mid,high,key);

    // Printing the result
    if(result == -1)
    {
        cout << endl << key << " is not found in array !!" << endl;
    }
    else
    {
        cout << endl << key << " is found at location " << result << " in array";
    }

    return 0;
}
