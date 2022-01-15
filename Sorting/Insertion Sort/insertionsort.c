// Program to sort the array using Insertion Sort

#include<stdio.h>
#define maxSize 100

// Function to sort the array
void sortInsertion(int array[], int size)
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
    printf("The sorted array: \n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
}

void main()
{
    int array[maxSize], size;

    // Scanning the size of the array
    printf("Enter the number of elements of array: ");
    scanf("%d",&size);

    // Scanning the elements of array
    printf("Enter the %d elements of array: \n",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }

    // Calling the sortInseriton function
    sortInsertion(array,size);
}
