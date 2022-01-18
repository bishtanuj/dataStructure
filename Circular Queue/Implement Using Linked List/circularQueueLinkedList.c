// Program to implement circular queue using Linked List

#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

// Function to insert the element in queue
void enqueue(int item)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode -> data = item;
    newnode -> next = 0;

    if(rear == 0)
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

// Function to delete the element from queue [FIFO]
void dequeue()
{
    struct node *temp;

    temp = front;

    if(front == NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else if(front == rear)
    {
        printf("\nThe dequeued element: %d\n",temp -> data);
        front = rear = 0;
        free(temp);
    }
    else
    {
        printf("\nThe dequeued element: %d\n",temp -> data);
        front = front -> next;
        rear -> next = front;
        free(temp);
    }
}

// Function to display the first element of queue
void peek()
{
    if(front == NULL)
    {
        printf("\nThe queue is empty !!\n");
    }
    else
    {
        printf("\nThe front element of queue: %d\n",front -> data);
    }
}

// Function to display the elements of queue
void display()
{
    struct node *temp;
    temp = front;

    if(front == NULL)
    {
        printf("\nThe queue is empty !!\n");
    }
    else
    {
        printf("\nQUEUE: \n");
        while(temp -> next != front)
        {
            printf("%d ",temp -> data);
            temp = temp -> next;
        }
        printf("%d ",temp -> data);
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
