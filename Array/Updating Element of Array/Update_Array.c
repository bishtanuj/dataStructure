/******************************************************************************
                        Program to update the Array
******************************************************************************/ 
#include<stdio.h>
#define maxsize 100
int main()
{
    int Array[maxsize],num;
    int index,val;

    //Scanning the number of elements of Array
    printf("Enter the number of elements of Array: ");
    scanf("%d",&num);

    //Scanning the elements of Array
    printf("Enter the elements of Array: \n");
    for(int i=0; i<num; i++)
    {
        printf("Element [%d]: ",i);
        scanf("%d",&Array[i]);
    }

    //Printing the Array
    printf("The elements of Array: \n");
    for(int i=0; i<num; i++)
    {
        printf("Element [%d]: %d\n",i,Array[i]);
    }

    //Scanning the index of Array at which value changes 
    printf("Enter the index of Array to change the value: ");
    scanf("%d",&index);

    //Scanning the new value at the given index
    printf("Enter the value to save at %d index of Array: ",index);
    scanf("%d",&val);

    //Inserting the value at the index
    Array[index] = val;

    //Printing the updated Array
    printf("The updated Array: \n");
    for(int i=0; i<num; i++)
    {
        printf("Element [%d]: %d\n",i,Array[i]);
    }

    return 0;
}
