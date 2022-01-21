// Program to implement Linked List using pointers

#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = 0;

// Function to create a Linked List
void createLinkedList(int item)
{
    struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    temp = head;

    newnode -> data = item;

    if(head == NULL)
    {
        head = temp = newnode;
        newnode -> next = 0;
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newnode;
        newnode -> next = 0;
    }
    
}

// Function to insert node at first position
void insertNodeAtFirst(int item)
{
    struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    temp = head;

    newnode -> data = item;
    
    if(head == NULL)
    {
        head = temp = newnode;
        newnode -> next = 0;
    }
    else
    {
        temp = newnode;
        newnode -> next = head;
        head = newnode;
    }
}

// Function to insert node at last position
void insertNodeAtLast(int item)
{
    struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    temp = head;

    newnode -> data = item;
    
    if(head == NULL)
    {
        head = newnode;
        newnode -> next = NULL;
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newnode;
        newnode -> next = NULL;
    }
}

// Function to insert node after the key inserted by user
void insertNodeAfterKey(int key, int item)
{
    struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    temp = head;

    newnode -> data = item;

    while(temp != NULL)
    {
        if(temp -> data == key)
        {
            newnode -> next = temp -> next;
            temp -> next = newnode;
        }

        temp = temp -> next;
    }
}

// Function to delete the first node
void deleteAtFirst()
{
    struct node *temp;
    temp = head;
    if(head == NULL)
    {
        printf("\nLinked List is empty !!\n");
    }
    else
    {
        printf("\nThe deleted element: %d\n",head -> data);
        head = head -> next;
        free(temp);
    }
}

// Function to delete the last node
void deleteAtLast()
{
    struct node *temp,*temp_1;
    temp = temp_1 = head;

    if(head == NULL)
    {
        printf("\nThe Linked List is empty !!\n");
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        while(temp_1 -> next != temp)
        {
            temp_1 = temp_1 -> next;
        }
        printf("\nThe deleted element: %d\n",temp -> data);
        temp_1 -> next = NULL;
        free(temp);
    }
}

// Function to delete the key entered by user
void deleteNodeAtKey(int key)
{
    struct node *temp,*previous;
    temp = head;
    previous = NULL;

    while(temp != NULL)
    {
        if(temp -> data == key)
        {
            if(temp == head)
            {
                head = head -> next;
                printf("\nThe deleted element: %d\n",temp -> data);
                free(temp);
                temp = head;
            }
            else
            {
                previous -> next = temp -> next;
                printf("\nThe deleted element: %d\n",temp -> data);
                free(temp);
                temp = previous -> next;
            }
        }
        else
        {
            previous = temp;
            temp = temp -> next;
        }
    }
}

// Function to display the linked list
void display()
{
    struct node *temp;
    temp = head;

    if(head == NULL)
    {
        printf("\nLinked List is empty !!\n");
    }
    else
    {
        printf("\nLinked List: \n");
        while(temp -> next != NULL)
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
    int item, key;
    int choice = 1;

    while(choice != 9)
    {
        printf("\n*** OPERATIONS ***\n");
        printf("1.  Create a single linked list\n");
        printf("2.  Insert node at first position\n");
        printf("3.  Insert node at last position\n");
        printf("4.  Insert a node after a given key value\n");
        printf("5.  Delete node at first position\n");
        printf("6.  Delete node at last position\n");
        printf("7.  Delete a node containing given key value\n");
        printf("8.  Display the linked list\n");
        printf("9.  Exit\n");

        // Scanning the choice from the user
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                // Scannig the element to enter in Linked List
                printf("Enter the value: ");
                scanf("%d",&item);

                // Calling the createLinkedList function
                createLinkedList(item);
                break;
            }

            case 2:
            {
                // Scannig the element to enter in Linked List
                printf("Enter the value: ");
                scanf("%d",&item);

                // Calling the insertNodeAtFirst function
                insertNodeAtFirst(item);
                break;
            }

            case 3:
            {
                // Scannig the element to enter in Linked List
                printf("Enter the value: ");
                scanf("%d",&item);

                // Calling the insertNodeAtLast function
                insertNodeAtLast(item);
                break;
            }

            case 4:
            {
                // Scannig the element to enter in Linked List
                printf("Enter the value: ");
                scanf("%d",&item);

                // Scanning the key element after which the item would insert
                printf("Enter the element after which you want to add the node: ");
                scanf("%d",&key);

                // Calling insertNodeAfterKey function
                insertNodeAfterKey(key,item);
                break;
            }

            case 5:
            {
                // Calling deleteAtFirst function
                deleteAtFirst();
                break;
            }

            case 6:
            {
                // Calling deleteAtLast function
                deleteAtLast();
                break;
            }

            case 7:
            {
                // Scanning the element to delete
                printf("Enter the element you want to delete: ");
                scanf("%d",&key);

                // Calling deleteNodeAtKey function
                deleteNodeAtKey(key);
                break;
            }

            case 8:
            {
                // Calling display function
                display();
                break;
            }

            default:
            {
                if(choice > 9)
                {
                    printf("\nEnter Right Choice !!\n");
                }
            }
        }
    }
}
