// Program to implement queue using Linked List

#include<stdio.h>
#include<malloc.h>

// Creating a structure named node
struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

// Function to enter the value in queue
void enqueue(int item)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = item;
    newnode -> next = 0;

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

// Function to remove the element from queue [FIFO]
void dequeue()
{
    struct node *temp;
    temp = front;

    if(front == 0 && rear == 0)
    {
        printf("\nQueue is empty !!\n");
    }
    else
    {
        printf("\nThe dequeued element: %d\n",front -> data);
        front = front -> next;
        free(temp);
    }
}

// Function to display the elements of queue
void display()
{
    struct node *temp;

    if(front ==0 && rear == 0)
    {
        printf("\nQueue is empty!!\n");
    }
    else
    {
        temp = front;
        printf("\n");
        while(temp != NULL)
        {
            printf("%d ",temp -> data);
            temp = temp -> next;
        }
        printf("\n");
    }
}

// Function to print the front element of the queue
void peek()
{
    if(front == 0 && rear == 0)
    {
        printf("\nQueue is empty !!\n");
    }
    else
    {
        printf("\nThe front data: %d\n",front -> data);
    }
}

void main()
{
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
                printf("Enter the value: ");
                scanf("%d",&item);

                // Calling enqueue function
                enqueue(item);
                break;
            }

            case 2:
            {
                // Calling dequeue function
                dequeue();
                break;
            }

            case 3:
            {
                // Calling display function
                display();
                break;
            }

            case 4:
            {
                // Calling peek function
                peek();
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
