/********************************************************************
        Program to search the element linearly in Array
********************************************************************/

#include<stdio.h>
int main()
{
    int Array_1[10],num,key,location;
    int temp = 0;
    
    //Scanning the number of elements of Array_1
    printf("Enter the number of elements of Array_1: ");
    scanf("%d",&num);

    //Scanning the elements of Array_1
    printf("Enter the elements of Array_1: ");
    for(int i=0; i<num; i++)
    {
        scanf("%d",&Array_1[i]);
    }

    //Scanning the element to search in a Array_1
    printf("Enter the element to search in Array_1: ");
    scanf("%d",&key);

    //Checking the key element in the Array_1
    for(int i=0; i<num; i++)
    {
        if(Array_1[i] == key)
        {
            location = i+1;
            temp++;
        }
    }

    //printing the result
    if(temp != 0)
    {
        printf("%d is found at location %d in Array_1",key,location);
    }
    else
    {
        printf("!! %d is not found in Array_1 !!",key);
    }
    return 0;
}