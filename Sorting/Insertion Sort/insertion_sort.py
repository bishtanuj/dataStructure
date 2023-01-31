# Program to perform insertion sort

# Function to scan the list
def scan_list(list_1, size):
    print(f"Enter the {size} elements of the array:")
    for i in range(size):
        element = int(input(f"Element [{i}]: "))
        list_1.append(element)


# Function to print the list
def print_list(list_1):
    print(list_1)


# Function to perform insertion sort
def insertion_sort(list_1, size):
    for i in range(size):
        temp = list_1[i]
        j = i - 1
        while j >= 0 and list_1[j] > temp:
            list_1[j+1] = list_1[j]
            j -= 1
        list_1[j+1] = temp


# Driver Function
if __name__ == '__main__':
    list_1 = []
    size = int(input("Enter the number of elements of the list: "))
    scan_list(list_1, size)
    print_list(f"List: {list_1}")
    insertion_sort(list_1, size)
    print_list(f"Sorted List: {list_1}")
