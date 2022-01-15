// Program to sort the array using "Bubble Sort"

#include<stdio.h>
#define maxSize 100

// Function to sort the array using Bubble Sort
void sortBubble(int array[], int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1-i; j++)
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
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Scanning the elements of the array
    printf("Enter the elements of array: \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }

    // Calling the sortBubble function
    sortBubble(array,size);
}
