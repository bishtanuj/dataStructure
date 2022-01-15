// Program to implement queue using Array

#include<iostream>
#include<cstdio>
#define maxSize 100

using namespace std;

// Globally declared queue and front and rear
int queue[maxSize];
int front = -1, rear = -1;

// Function to insert the element in queue
void enqueue(int x)
{
    if(rear == maxSize - 1)
    {
        cout << "Overflow";
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

// Function to delete the element from queue [FIFO]
void dequeue()
{
    if(front == -1 && rear == -1)
    {
        cout << "UNderflow";
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        cout << "The dequeued element from the queue: " << queue[front];
        front++;
    }
}

// Function to display the elements of queue
void display()
{
    if(front == -1 && rear == -1)
    {
        cout << "Queue is empty";
    }
    else
    {
        cout << "The elements of Queue: ";
        for(int i = front; i < rear + 1; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

// Function to display the first element of queue
void peek()
{
    if(front == -1 && rear == -1)
    {
        cout << "Queue is empty ";
    }
    else
    {
        cout << "The first element of queue: " << queue[front];
    }
    cout << endl;
}

int main()
{
    int x, choice = 1;

    // Using while loop so that user can use this program according to his/her choice
    while(choice != 5)
    {
        cout << "\n*** OPERATIONS OF QUEUE ***\n";
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Peek" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "Enter the element: ";
                cin >> x;
                enqueue(x);
                break;
            }

            case 2:
            {
                dequeue();
                break;
            }

            case 3:
            {
                display();
                break;
            }

            case 4:
            {
                peek();
                break;
            }

            default:
            {
                if(choice > 5)
                {
                    cout << "Enter right choice !!" << endl;
                }
            }
        }
    }

    cout << endl;
    cout << "Thank You" << endl;
    return 0; 
}
