# Program to perform various functionalities on singly linked list

# class to create a node
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


# class to provide different functionalities of linked list
class LinkedList:
    def __init__(self):
        self.head = None

    def insert_from_tail(self, data):
        node = Node(data)
        if self.head:
            temp = self.head
            while temp.next:
                temp = temp.next
            temp.next = node
        else:
            self.head = node

    def insert_from_head(self, data):
        node = Node(data)
        if self.head:
            temp = node
            temp.next = self.head
            self.head = temp
        else:
            self.head = node

    def delete_from_head(self):
        if self.head:
            temp = self.head
            print(f"\nDeleted Element: {temp.data}")
            self.head = temp.next
            del temp
        else:
            print("Linked list is empty!!")

    def delete_from_tail(self):
        if self.head:
            temp, temp_1 = self.head, self.head
            while temp.next:
                temp = temp.next
            while temp_1.next != temp:
                temp_1 = temp_1.next
            print(f"\nDeleted Element: {temp.data}")
            temp_1.next = None
            del temp
        else:
            print("Linked list is empty!!")

    def display(self):
        if self.head:
            print("Elements of the linked list:", end=" ")
            current = self.head
            while current:
                print(current.data, end="->")
                current = current.next
            print(None)
        else:
            print("Linked list is empty!!")


# driver
if __name__ == '__main__':
    linked_list = LinkedList()

    choice = 1
    while choice != 6:
        print("1. Insert the element from head")
        print("2. Insert the element from tail")
        print("3. Delete the element from head")
        print("4. Delete the element from tail")
        print("5. Display the linked list")
        print("6. Exit")

        choice = int(input("Enter your choice: "))
        match choice:
            case 1:
                element = int(input("Enter the element: "))
                linked_list.insert_from_head(element)
            case 2:
                element = int(input("Enter the element: "))
                linked_list.insert_from_tail(element)
            case 3:
                linked_list.delete_from_head()
            case 4:
                linked_list.delete_from_tail()
            case 5:
                linked_list.display()
            case 6:
                print("!! Thanks for using the console !!")
                exit()
            case _:
                print("Kindly select right choice!!")
