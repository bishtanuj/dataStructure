#include<iostream>
#include<cstdio>
#define maxsize 100

using namespace std;

int main()
{
    int Array[maxsize],num;

    //Scanning the number of elements
    cout << "Enter the number of elements of Array: ";
    cin >> num;

    //Scanning the elements of Array
    cout << "Enter the elements of Array: \n";
    for(int i=0; i<num; i++)
    {
        printf("Element [%d]: ",i);
        scanf("%d",&Array[i]);
    }

    //Printing the elements of Array
    cout << "The elements of Array: \n";
    for(int i=0; i<num; i++)
    {
        cout << Array[i] << endl;
    }

    return 0;
}