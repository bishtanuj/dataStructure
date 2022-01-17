// Program to implement stack using array

#include<stdio.h>
#define maxSize 100

// Globally defining the stack and the position of top
int stack[maxSize];
int top = -1;

// Function to push the elements in stack
void push()
{
    int data;

    // Scanning the value to enter in stack
    printf("\nEnter the value: ");
    scanf("%d",&data);

    // Inserting element in stack using conditions of stack
    if(top == maxSize - 1)
    {
        printf("\nOverflow\n");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

// Function to pop out the element from the stack [LIFO]
void pop()
{
    int item;

    if(top == -1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("\nThe popped item: %d\n",item);
    }
}

// Function to print the top most element of stack
void peek()
{
    if(top == -1)
    {
        printf("\nStack is empty !!\n");
    }
    else
    {
        printf("\nTop most element: %d\n",stack[top]);
    }
}

// Fuction to display the stack elements
void display()
{
    printf("\n");
    printf("The elements of stack are: \n");
    for(int i=top; i>=0; i--)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}

void main()
{
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
                // Calling push function
                push();
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
                // calling display function
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
