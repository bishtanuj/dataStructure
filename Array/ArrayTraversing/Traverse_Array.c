/******************************************************************************
                Program to print the elements of Array
******************************************************************************/

#include<stdio.h>
#define maxsize 100
int main()
{
    int Array_1[maxsize],num;

    printf("Enter the number of elements of Array: ");
    scanf("%d",&num);

    printf("\n\n");
    printf("Enter the elements of Array_1: \n");
    for(int i=0; i<num; i++)
    {
        printf("Element [%d]: ",i+1);
        scanf("%d",&Array_1[i]);
    }

    printf("\n\n");
    printf("Elements of Array_1: \n");
    for(int i=0; i<num; i++)
    {
        printf("Element [%d]: %d \n",i+1,Array_1[i]);
    }
    return 0;
}