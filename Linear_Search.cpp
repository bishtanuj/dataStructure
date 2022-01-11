#include<iostream>
#include<cstdio>
#define maxsize 100

using namespace std;

int main()
{
    int Array[maxsize],num,key;
    int index,temp=0;

    //Scanning the number of elements of Array
    cout << "Enter the number of elements of Array: ";
    cin >> num;

    //Scanning the elements of Array
    cout << "Enter the elements of Array: \n";
    for(int i=0; i<num; i++)
    {
        printf("Element [%d]: ",i);
        cin >> Array[i];
    }

    //Printing the Array
    cout << "The elements of Array: \n";
    for(int i=0; i<num; i++)
    {
        printf("%d ",Array[i]);
    } 

    //Scanning the element to search
    cout << "\nEnter the element to search: ";
    cin >> key;

    for(int i=0; i<num; i++)
    {
        if(Array[i] == key)
        {
            index = i;
            temp++;
        }
    }

    if(temp != 0)
    {
        printf("%d is located at %d index of Array",key,index);
    }
    else
    {
        printf("!! %d is not part of Array !!",key);
    }

    return 0;
}