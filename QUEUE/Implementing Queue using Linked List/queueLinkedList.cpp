// Program to implement queue using linked list

#include<iostream>
#include<cstdio>

using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
    node *front;
    node *rear;

    public:
    queue()
    {
        front = NULL;
        rear = NULL;
    }

    // Function to insert the value in queue
    void enqueue(int item)
    {
        node *newnode = new node(item);

        if(front == 0 && rear == 0)
        {
            front = rear = newnode;
        }
        else
        {
            rear -> next = newnode;
            rear = newnode;
        }
    }

    // Function to delete the element from the queue [FIFO]
    void dequeue()
    {
        node *temp = front;

        if(front == NULL && rear == NULL)
        {
            cout << "\nQueue is empty !!" << endl;
        }
        else
        {
            cout << "\nThe deleted element of queue: " << front -> data << endl;
            front = front -> next;
            delete(temp);
        }
    }

    // Function to print the first element of the queue
    void peek()
    {
        if(front == NULL && rear == NULL)
        {
            cout << "\nThe queue is empty !!" << endl;
        }
        else
        {
            cout <<"\nThe front element of queue: " << front -> data << endl;
        }
    }

    // Function to diplay the queue
    void display()
    {
        node *temp = front;

        if(front == NULL && rear == NULL)
        {
            cout << "\nThe queue is empty !!" << endl;
        }
        else
        {
            cout << "\nQUEUE: " << endl;
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
    queue q;
    int item;
    int choice = 1;

    while(choice != 5)
    {
        printf("\n*** Operations of queue ***\n");
        printf("1.  Enqueue\n");
        printf("2.  Dequeue\n");
        printf("3.  Display\n");
        printf("4.  Peek\n");
        printf("5.  Exit\n");

        // Scanning the choice
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                // Scanning the element to enter in queue
                cout << "Enter the value: ";
                cin >> item;

                // Calling enqueue function
                q.enqueue(item);
                break;
            }

            case 2:
            {
                // Calling dequeue function
                q.dequeue();
                break;
            }

            case 3:
            {
                // Calling display function
                q.display();
                break;
            }

            case 4:
            {
                // Calling peek function
                q.peek();
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
