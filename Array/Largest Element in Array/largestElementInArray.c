/******************************************************************************
            Program to compute the largest element in array
******************************************************************************/
#include<stdio.h>
#define maxSize 100

int main()
{
    int array[maxSize], size;
    int max;
    
    // Scanning the size of the array
    printf("Enter the size of the array: ");
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

    // Assigning the first element of the array to max variable
    max = array[0];

    // Checking for elements maximum than value of max variable
    for(int i=1; i<size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    // Printing out the result
    printf("\nThe largest element of the array: %d",max);
    
    return 0;
}
