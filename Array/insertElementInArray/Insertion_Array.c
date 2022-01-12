/******************************************************************************
                    Program to insert the value in Array
******************************************************************************/
#include<stdio.h>
#define maxsize 100
int main()
{
    int Array_1[maxsize],num;
    int key,location;
    int temp;

    // Scanning the number of elments of Array_1
    printf("Enter the number of elements of Array_1: ");
    scanf("%d",&num);

    // Scanning the elements of Array_1
    printf("Enter the elements of Array_1: \n");
    for(int i=0; i<num; i++)
    {
        printf("Element [%d]: ",i);
        scanf("%d",&Array_1[i]);
    }

    // Printing the Array_1
    printf("\n\n");
    printf("The elements of Array_1: \n");
    for(int i=0; i<num; i++)
    {
        printf("Element [%d]: %d \n",i,Array_1[i]);
    }

    // Scanning the location to add the element
    printf("\n\n");
    printf("Enter the index of Array_1 to add the element: ");
    scanf("%d",&location);

    // Scanning the element to add at given location
    printf("\n\n");
    printf("Enter the element to add at location %d: ",location);
    scanf("%d",&key);

    // Transfering the size of array to another variable
    temp = num;

    // Increment of size of Array_1
    num = num + 1;

    // Makes the location index empty
    while(temp >= location)
    {
        Array_1[temp + 1] = Array_1[temp];
        temp--;
    }

    // Transfer the key element into location index
    Array_1[location] = key;

    // Printing the Array_1 after insertion
    printf("\n\n");
    printf("Elements of Array_1 after the insertion: \n");
    for(int i=0; i<num; i++)
    {
        printf("Element [%d]: %d \n",i,Array_1[i]);
    }
    return 0;
}
