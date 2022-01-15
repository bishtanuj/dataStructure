/*******************************************************************************
                Program for linear search using recursion
*******************************************************************************/

#include<stdio.h>

//Creating the element to search in an Array_1
void linear_search(int Array_1[],int key,int num)
{
    int location;
    if(num > 0)
    {
        if(Array_1[num] == key)
        {
            location = num;
            printf("The element %d is at location %d",key,location);
        }
        else
        {
            linear_search(Array_1,key,num-1);
        }
    }
    else
    {
        printf("!! The element %d is not the part of Array !!",key);
    }
}

int main()
{
    int Array_1[20],num;
    int key;

    //Scanning the number of elements of Array_1
    printf("Enter the number of elements of Array: ");
    scanf("%d",&num);

    //Scanning the elements from the user
    printf("Enter the %d elements of Array: ",num);
    for(int t=0; t<num; t++)
    {
        scanf("%d",&Array_1[t]);
    }

    //Scanning the element to search
    printf("Enter the element to search in Array: ");
    scanf("%d",&key);

    //Printing the result
    linear_search(Array_1,key,num);
    return 0;
}
