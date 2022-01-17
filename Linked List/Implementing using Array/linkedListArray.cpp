// Program to implement linked list using array

#include<iostream>
#define maxSize 100

using namespace std;

// Globally defining the stack and the position of top
int stack[maxSize];
int top = -1;

// Function to push the elements in stack
void push()
{
    int data;

    // Scanning the value to enter in stack
    cout << "Enter the value: ";
    cin >> data;

    // Inserting element in stack using conditions of stack
    if(top == maxSize - 1)
    {
        cout << "\nOverflow\n";
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

// Function to pop out the element from the stack [LIFO]
void pop()
{
    int item;
    if(top == -1)
    {
        cout << "\nUnderflow\n";
    }
    else
    {
        item = stack[top];
        top--;
        cout << "\nThe popped item: " << item << endl;
    }
}

// Function to print the top most element of stack
void peek()
{
    if(top == -1)
    {
        cout << "\nStack is empty !!" << endl;
    }
    else
    {
        cout << "\nThe top most element of stack: " << stack[top] << endl;
    }
}

// Fuction to display the stack elements
void display()
{
    int i = top;
    cout << "\nThe element of stack are: \n";
    while(i >= 0)
    {
        cout << stack[i] << " ";
        i--;
    }
    cout << endl;
}

int main()
{
    int choice = 1;
    while(choice != 5)
    {
        cout << "\n*** OPERATIONS ON STACK ***" << endl;
        cout << "1. PUSH" << endl;
        cout << "2. POP" << endl;
        cout << "3. PEEK" << endl;
        cout << "4. DISPLAY" << endl;
        cout << "5. EXIT" << endl;

        // Scanning the choice 
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                // Calling push function
                push();
                break;
            }

            case 2:
            {
                // Calling pop function
                pop();
                break;
            }

            case 3:
            {
                // Calling the peek function
                peek();
                break;
            }

            case 4:
            {
                // Calling the display function
                display();
                break;
            }

            default:
            {
                if(choice > 5)
                {
                    cout << "\nEnter Right Choice !!" << endl;
                }
            }
        }
    }
}
