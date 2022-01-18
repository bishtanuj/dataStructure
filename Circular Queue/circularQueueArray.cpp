// Program to implement circular queue using Array

#include<iostream>
#define maxSize 100

using namespace std;

// Globally declared queue and front and rear
int queue[maxSize];
int front = -1;
int rear = -1;

// Function to insert the element in queue
void enqeue(int item)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = item;
    }
    else if(((rear + 1) % maxSize) == front)
    {
        cout << "\nQueue is full !!" << endl;
    }
    else
    {
        rear = (rear + 1) % maxSize;
        queue[rear] = item;
    }
}

// Function to delete the element from queue [FIFO]
void dequeue()
{
    if(front == -1 && rear == -1)
    {
        cout << "\nUNDERFLOW" << endl;
    }
    else if(front == rear)
    {
        cout << "\nThe dequeued element: " << queue[front] << endl;
        front = rear = -1;
    }
    else
    {
        cout << "\nThe dequeued element: " << queue[front] << endl;
        front = (front + 1) % maxSize;
    }
}

// Function to display the first element of queue
void peek()
{
    if(front == -1 && rear == -1)
    {
        cout << "\nThe queue is empty !!" << endl;
    }
    else
    {
        cout << "\nThe front element of queue: " << queue[front] << endl;
    }
}

// Function to display the elements of queue
void display()
{
    int temp = front;

    if(front == -1 && rear == -1)
    {
        cout << "\nThe queue is empty !!" << endl;
    }
    else
    {
        cout << endl;
        cout << "Queue: " << endl;
        while(temp != rear)
        {
            cout << queue[temp] << " ";
            temp = (temp + 1) % maxSize;
        }    
        cout << queue[rear] << " " << endl;
    }
}

int main()
{
    int item;
    int choice = 1;

    // Using while loop so that user can use this program according to his/her choice
    while(choice != 5)
    {
        cout << "\n*** OPERATIONS OF QUEUE ***" << endl;
        cout << "1. ENQUEUE" << endl;
        cout << "2. DEQUEUE" << endl;
        cout << "3. PEEK" << endl;
        cout << "4. DISPLAY" << endl;
        cout << "5. EXIT" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "Enter the element: ";
                cin >> item;
                enqeue(item);
                break;
            }

            case 2:
            {
                dequeue();
                break;
            }

            case 3:
            {
                peek();
                break;
            }

            case 4:
            {
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

    return 0;
}