// Program to sort the array using Insertion Sort

#include<iostream>
#define maxSize 100

using namespace std;

// Function to sort the array
void insertionSort(int array[], int size)
{
    int temp;
    for(int i=1; i<size; i++)
    {
        temp = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > temp)
        {
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = temp;
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
    cout << "Enter the sixe of the array: ";
    cin >> size;

    // Scanning the elements of array
    cout << "Enter the elements of array: ";
    for(int i=0; i<size; i++)
    {
        cin >> array[i];
    }

    // Calling insertionSort function
    insertionSort(array,size);

    return 0;
}
