// Program to implement circular queue using Linked List
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

class circularQueue
{
    node *front;
    node *rear;

    public:
    circularQueue()
    {
        front = NULL;
        rear = NULL;
    }

    // Function to enter the elements in queue
    void enqueue(int item)
    {
        node *newnode = new node(item);

        if(rear == NULL)
        {
            front = rear = newnode;
            rear -> next = front;
        }
        else
        {
            rear -> next = newnode;
            rear = newnode;
            rear -> next = front;
        }

    }

    // Function to delete the elements from the queue [FIFO]
    void dequeue()
    {
        node *temp = front;

        if(front == NULL)
        {
            cout << "\nUNDERFLOW" << endl;
        }
        else if(front == rear)
        {
            cout << "\nThe dequeued element: " << front -> data << endl;
            front = rear = NULL;
            delete(temp);
        }
        else
        {
            cout << "\nThe dequeued element: " << front -> data << endl;
            front = front -> next;
            rear -> next = front;
            delete(temp);
        }
    }

    // Function to print the first element from the queue
    void peek()
    {
        if(front == NULL)
        {
            cout << "\nThe queue is empty !!" << endl;
        }
        else
        {
            cout << "\nThe front element of queue: " << front -> data << endl;
        }
    }

    // Function to display the queue
    void display()
    {
        node *temp = front;

        if(front == NULL)
        {
            cout << "\nThe queue is empty !!" << endl;
        }
        else
        {
            cout << "\nQUEUE: " << endl;
            while(temp -> next != front)
            {
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << temp -> data << endl;
        }
    }
};

int main()
{
    circularQueue q;
    int item;
    int choice = 1;

    // Using while loop so that user can use this program according to his/her choice
    while(choice != 5)
    {
        cout << "\n*** OPERATIONS OF QUEUE ***" << endl;
        cout << "1.  ENQUEUE" << endl;
        cout << "2.  DEQUEUE" << endl;
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
                // Scanning the element to enter in queue
                cout << "Enter the element: ";
                cin >> item;

                // Calling the function enqueue
                q.enqueue(item);
                break;
            }

            case 2:
            {
                // Calling the funciton dequeue
                q.dequeue();
                break;
            }

            case 3:
            {
                // Calling the funciton peek
                q.peek();
                break;
            }

            case 4:
            {
                // Calling the funciton display
                q.display();
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
