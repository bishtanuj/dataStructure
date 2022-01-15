// Program to search the element in array using binary search

#include<stdio.h>
#define maxsize 50

// Function to perform binary search
int binary_search(int array[],int num, int low, int mid, int high, int key)
{
    low = 0;
    high = num;
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
    int array[maxsize],num,result;
    int key, low, mid, high;

    // Scanning the size of the array
    printf("Enter the number of elements of Array: ");
    scanf("%d",&num);

    // Scanning the elements of array
    printf("\n\nEnter the elements of Array: \n");
    for(int i=0; i<num; i++)
    {
        printf("Element [%d]: ",i);
        scanf("%d",&array[i]);
    }

    // Scanning the key element to find in array
    printf("\n\nEnter the element to find in Array: ");
    scanf("%d",&key);

    // Calling binar_search function
    result = binary_search(array,num,low,mid,high,key);
    
    // Printing the result      
    if(result == -1)
    {
        printf("\n!! %d is not found in Array !!",key);
    }
    else
    {
        printf("\n%d is found at location %d in Array",key,result);
    }

    return 0;
}
