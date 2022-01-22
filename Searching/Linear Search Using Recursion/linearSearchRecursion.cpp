// Program for linear search using recursion

#include<iostream>
#define maxSize 100

using namespace std;

//Creating the element to search in an array
void linearSearch(int array[], int size, int key)
{
    int location;
    if(size > 0)
    {
        if(array[size] == key)
        {
            location = size;
            cout << "\nThe element " << key << " is at location " << location << endl;
        }
        else
        {
            linearSearch(array,size-1,key);
        }
    }
    else
    {
        cout << "\n!! The element " << key << " is not found in array !!" << endl;
    }
}

int main()
{
    int array[maxSize], size;
    int key;

    // Scanning the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Scannning the elements of the array
    cout << "Enter the elements of array: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> array[i];
    }

    // Scanning the element to search
    cout << "Enter the element to search: ";
    cin >> key;

    //Printing the result
    linearSearch(array,size,key);

    return 0;
}
