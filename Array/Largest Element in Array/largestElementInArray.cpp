#include<iostream>
#include<cstdio>
#define maxSize 100
using namespace std;

int main()
{
    int array[maxSize], size;
    int max;

    // Scanning the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Scanning the elements of the array
    cout << "Enter the " << size << " elements of the array: " << endl;
    for(int i=0; i<size; i++)
    {
        printf("ELement [%d]: ",i);
        cin >> array[i];
    }

    // Printing the elements of the array
    cout << "The input array: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }

    // Assigning the first element of the array to max variable
    max = array[0];

    // Checking for elements maximum than value of max variable
    for(int i=0; i<size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    // Printing out the result
    cout << "\nThe largest element of input array: " << max << endl;

    return 0;
}
