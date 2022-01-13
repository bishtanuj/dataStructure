/******************************************************************************
            Program to compute the smallest element in array
******************************************************************************/
#include<stdio.h>
#define maxSize 100

int main()
{
    int array[maxSize], size;
    int min;
    
    // Scanning the size of the array
    printf("ENter the size of the array: ");
    scanf("%d",&size);

    // Scanning the elements of array
    printf("Enter the %d elements of the array: \n",size);
    for(int i=0; i<size; i++)
    {
        printf("Element [%d]: ",i);
        scanf("%d",&array[i]);
    }

    // Printing the array
    printf("The input array: \n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }

    // Assigning the first element of the array to min variable
    min = array[0];

    // Checking for elements minimum than value of min variable
    for(int i=1; i<size; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    // Printing out the result
    printf("\nThe smallest element of the array: %d",min);
    
    return 0;
}
