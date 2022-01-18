// Program to implement circular queue using Array

#include<stdio.h>
#define maxSize 100

// Globally declared queue and front and rear
int queue[maxSize];
int front = -1;
int rear = -1;

// Function to insert the element in queue
void enqueue(int item)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = item;
    }
    else if(((rear + 1) % maxSize) == front)
    {
        printf("\nQueue is full !!\n");
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
        printf("\nUNDERFLOW\n");
    }
    else if(front == rear)
    {
        printf("\nThe dequed element: %d\n",queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("\nThe dequed element: %d\n",queue[front]);
        front = (front + 1) % maxSize;
    }
}

// Function to display the first element of queue
void peek()
{
    if(front == -1 && rear == -1)
    {
        printf("\nThe queue is empty !!\n");
    }
    else
    {
        printf("\nThe front element of queue: %d\n",queue[front]);
    }
}

// Function to display the elements of queue
void display()
{
    int temp = front;

    if(front == -1 && rear == -1)
    {
        printf("\nThe queue is empty !!\n");
    }
    else
    {
        printf("\nQUEUE: \n");
        while(temp != rear)
        {
            printf("%d ",queue[temp]);
            temp = (temp + 1) % maxSize;
        }
        printf("%d ",queue[rear]);
        printf("\n");

    }
}

void main()
{
    int item;
    int choice = 1;

    // Using while loop so that user can use this program according to his/her choice
    while(choice != 5)
    {
        printf("\n*** OPERATIONS OF QUEUE ***\n");
        printf("1.  ENQUEUE\n");
        printf("2.  DEQUEUE\n");
        printf("3.  PEEK\n");
        printf("4.  DISPLAY\n");
        printf("5.  EXIT\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                printf("Enter the element: ");
                scanf("%d",&item);
                enqueue(item);
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
                    printf("\nEnter Right Choice !!\n");
                }
            }
        }
    }
}
