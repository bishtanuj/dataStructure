// Program to implement stack using Linked list

#include<stdio.h>
#include<malloc.h>

// Creating a structure named node
struct node
{
    int data;
    struct node *next;
};
struct node *top = 0;

// Function to push the element in stack
void push(int item)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    // Pushing element in a newnode
    newnode -> data = item;
    newnode -> next = top;

    // top pointing to the newnode
    top = newnode;
}

// Function to pop out the element from stack [LIFO]
void pop()
{
    struct node *temp;
    temp = top;

    // Printing the popped element using condition
    if(top == NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        printf("\nThe popped element: %d\n",top -> data);
        top = top -> next;

        // free the temp to vacant the memory
        free(temp);
    }
}

// Function to print the top most element of stack
void peek()
{
    if(top == NULL)
    {
        printf("\nStack is empty!!\n");
    }
    else
    {
        printf("\nThe top most element: %d\n",top -> data);
    }
}

// Function to display the elements of stack
void display()
{
    struct node *temp;
    temp = top;

    if(top == NULL)
    {
        printf("\nStack is empty!!\n");
    }
    else
    {
        printf("\n");
        while(temp != NULL)
        {
            printf("%d ",temp -> data);
            temp = temp -> next;
        }
        printf("\n");
    }
}

void main()
{
    int item;
    int choice = 1;
    while(choice != 5)
    {
        printf("\n*** OPERATIONS ON STACK ***\n");
        printf("1.  PUSH\n");
        printf("2.  POP\n");
        printf("3.  PEEK\n");
        printf("4.  DISPLAY\n");
        printf("5.  EXIT\n");

        // Scanning the choice 
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                // Scanning the element to push in stack
                printf("\nEnter the value: ");
                scanf("%d",&item);

                // Calling push function
                push(item);
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
                // Calling peek function
                peek();
                break;
            }

            case 4:
            {
                // Calling display function
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
