// Program to implement Linked List

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

class LinkedList
{
    node *head;

    public:
    LinkedList()
    {
        head = NULL;
    }

    // Function to create a Linked List
    void createLinkedList(int item)
    {
        node *newnode = new node(item);
        node *temp = head;

        if(head == NULL)
        {
            head = temp = newnode;
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

    // Function to insert node at first position
    void insertNodeAtFirst(int item)
    {
        node *newnode = new node(item);
        node *temp = head;

        if(head == NULL)
        {
            head = temp = newnode;
            newnode -> next = NULL;
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
        node *newnode = new node(item);
        node *temp = head;

        if(head == NULL)
        {
            head = temp = newnode;
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
        node *newnode = new node(item);
        node *temp = head;

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
        node *temp = head;

        if(head == NULL)
        {
            cout << "\nThe Linked List is empty !!" << endl;
        }
        else
        {
            cout << "\nThe deleted element: " << head -> data << endl;
            head = head -> next;
            delete(temp);
        }
    }

    // Function to delete the last node
    void deleteAtLast()
    {
        node *temp_1 = head;
        node *temp = head;

        if(head == NULL)
        {
            cout << "\nThe Linked List is empty !!" << endl;
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
            cout << "\nThe deleted element: " << temp -> data << endl;
            temp_1 -> next = NULL;
            delete(temp);
        }
    }

    //Function to delete the key entered by user
    void deleteNodeAtKey(int key)
    {
        node *temp = head;
        node *previous = NULL;

        while(temp != NULL)
        {
            if(temp -> data == key)
            {
                if(temp == head)
                {
                    head = head -> next;
                    cout << "\nThe deleted element: " << temp -> data << endl;
                    delete(temp);
                    temp = head;
                }
                else
                {
                    previous -> next = temp -> next;
                    cout << "\nThe deleted element: " << temp -> data << endl;
                    delete(temp);
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
        node *temp = head;

        if(head == NULL)
        {
            cout << "\nThe Linked List is empty !!" << endl;
        }
        else
        {
            cout << "\nLinked List" << endl;
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
    LinkedList L;
    int item, key;
    int choice = 1;
    
    while(choice != 9)
    {
        cout << "\n*** OPERATIONS ***" << endl;
        cout << "1.  Create a single linked list" << endl;
        cout << "2.  Insert node at first position" << endl;
        cout << "3.  Insert node at last position" << endl;
        cout << "4.  Insert a node after a given key value" << endl;
        cout << "5.  Delete node at first position" << endl;
        cout << "6.  Delete node at last position" << endl;
        cout << "7.  Delete a node containing given key value" << endl;
        cout << "8.  Display the linked list" << endl;
        cout << "9.  Exit" << endl;

        // Scanning the choice from the user
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                // Scannig the element to enter in Linked List
                cout << "Enter the value: ";
                cin >> item;

                // Calling the createLinkedList function
                L.createLinkedList(item);
                break;
            }

            case 2:
            {
                // Scannig the element to enter in Linked List
                cout << "Enter the value: ";
                cin >> item;

                // Calling the insertNodeAtFirst function
                L.insertNodeAtFirst(item);
                break;
            }

            case 3:
            {
                // Scannig the element to enter in Linked List
                cout << "Enter the value: ";
                cin >> item;

                // Calling the insertNodeAtLast function
                L.insertNodeAtLast(item);
                break;
            }

            case 4:
            {
                // Scannig the element to enter in Linked List
                cout << "Enter the value: ";
                cin >> item;

                // Scanning the key element after which the item would insert
                cout << "Enter the element after which you want to add the node: ";
                cin >> key;

                // Calling insertNodeAfterKey function
                L.insertNodeAfterKey(key,item);
                break;
            }

            case 5:
            {
                // Calling deleteAtFirst function
                L.deleteAtFirst();
                break;
            }

            case 6:
            {
                // Calling deleteAtLast function
                L.deleteAtLast();
                break;
            }

            case 7:
            {
                // Scanning the element to delete
                cout << "Enter the element you want to delete: ";
                cin >> key;

                // Calling deleteNodeAtKey function
                L.deleteNodeAtKey(key);
                break;
            }

            case 8:
            {
                // Calling display function
                L.display();
                break;
            }

            default:
            {
                if(choice > 9)
                {
                    cout << "\nEnter Right Choice !!" << endl;
                }
            }
        }
    }

    return 0;
}
