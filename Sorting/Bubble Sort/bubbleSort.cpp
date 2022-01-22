// Program to sort the array using "Bubble Sort"

#include<iostream>
#define maxSize 100

using namespace std;

// Function to sort the array using Bubble Sort
void bubbleSort(int array[], int size)
{
    int temp;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    // Printing the sorted array
    cout << "\nThe sorted array: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[maxSize], size;

    // Scanning the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Scanning the elements of array
    cout << "Enter the " << size << " elements of array: " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> array[i];
    }

    // Calling bubbleSort function
    bubbleSort(array,size);

    return 0;
}
