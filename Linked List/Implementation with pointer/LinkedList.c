#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = 0;

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

    if(temp == NULL)
    {
        printf("\n%d is not found in Linked List !!\n",key);
    }
}

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

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                printf("Enter the value: ");
                scanf("%d",&item);
                createLinkedList(item);
                break;
            }

            case 2:
            {
                printf("Enter the value: ");
                scanf("%d",&item);
                insertNodeAtFirst(item);
                break;
            }

            case 3:
            {
                printf("Enter the value: ");
                scanf("%d",&item);
                insertNodeAtLast(item);
                break;
            }

            case 4:
            {
                printf("Enter the value: ");
                scanf("%d",&item);
                printf("Enter the element after which you want to add the node: ");
                scanf("%d",&key);
                insertNodeAfterKey(key,item);
                break;
            }

            case 5:
            {
                deleteAtFirst();
                break;
            }

            case 6:
            {
                deleteAtLast();
                break;
            }

            case 7:
            {
                printf("Enter the element you want to delete: ");
                scanf("%d",&key);
                deleteNodeAtKey(key);
                break;
            }

            case 8:
            {
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
