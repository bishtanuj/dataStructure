// Program to implement stack using Linked List

#include<iostream>

using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int item)
    {
        data = item;
        next = NULL;
    }
};

class stack
{
    node *top;
    
    public:
    stack()
    {
        top = NULL;
    }

    // Funciton to enter the value in stack
    void push(int item)
    {
        node *newnode = new node(item);

        newnode -> next = top;
        top = newnode;
    }

    // Function to pop out the value from stack [LIFO]
    void pop()
    {
        node *temp = top;

        if(top == NULL)
        {
            cout << "\nUNDERFLOW" << endl;
        }
        else
        {
            cout << "\nThe popped element: " << top -> data << endl;
            top = top -> next;

            delete(temp);
        }
    }

    // Funciton to print the top value of stack
    void peek()
    {
        if(top == NULL)
        {
            cout << "\nThe stack is empty !!" << endl;
        }
        else
        {
            cout << "\nThe top most element of stack: " << top -> data << endl;
        }
    }

    // Function to display the elements of stack
    void display()
    {
        node *temp = top;

        if(top == NULL)
        {
            cout << "\nThe Stack is empty !!" << endl;
        }
        else
        {
            cout << endl;
            while(temp != NULL)
            {
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << endl;
        }
    }
};

int main()
{
    stack s;
    int item;
    int choice = 1;

    // Using while loop so that user can use this program according to his/her choice
    while(choice != 5)
    {
        cout << "\n*** OPERATIONS OF STACK ***" << endl;
        cout << "1.  PUSH" << endl;
        cout << "2.  POP" << endl;
        cout << "3.  PEEK" << endl;
        cout << "4.  DISPLAY" << endl;
        cout << "5.  EXIT" << endl;;

        // Scanning the choice
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                // Scanning the element to enter in stack
                cout << "Enter the element: ";
                cin >> item;

                // Calling the function push
                s.push(item);
                break;
            }

            case 2:
            {
                // Calling the funciton pop
                s.pop();
                break;
            }

            case 3:
            {
                // Calling the funciton peek
                s.peek();
                break;
            }

            case 4:
            {
                // Calling the funciton display
                s.display();
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

    return 0;
}
