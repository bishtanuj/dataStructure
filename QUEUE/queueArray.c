// Program to implement queue using Array

#include<stdio.h>
#define maxSize 100

// Globally declared queue and front and rear
int queue[maxSize];
int front = -1, rear = -1;

// Function to insert the element in queue
void enqueue(int x)
{
    if(rear == maxSize - 1)
    {
        printf("Overflow");
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
        printf("Underflow");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("The dequeued element from the queue: %d",queue[front]);
        front++;
    }
}

// Function to display the elements of queue
void display()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("The elements of Queue: ");
        for(int i = front; i < rear+1; i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}


// Function to display the first element of queue
void peek()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("The first element of queue: %d ",queue[front]);
    }
    printf("\n");
}

void main()
{
    int x, choice = 1;

    // Using while loop so that user can use this program his/her choice
    while(choice != 5)
    {
        printf("\n*** Operations of queue ***\n");
        printf("1.  Enqueue\n");
        printf("2.  Dequeue\n");
        printf("3.  Display\n");
        printf("4.  Peek\n");
        printf("5.  Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                printf("Enter the element: ");
                scanf("%d",&x);
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
        }
    }    
}
