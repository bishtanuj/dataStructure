# Program to perform linear search

# function to perform linear search on the list
def linearSearch(list_1, size, key):
    for i in range(size):
        if list_1[i] == key:
            return i
    return -1


# scanning the size of the list 
size = int(input("Enter the number of elements to be entered in list: "))

# initialiszing the empty list
list_1 = []

# scanning the elements of the list
print(f"Enter the {size} elements of the list")
for i in range(size):
    print(f"Element {i+1}:", end=" ")
    element = int(input())
    list_1.append(element)

# printing the list
print("Your List:")
print(list_1)

# scanning the key element to find in the list
key = int(input("Enter an element to find in list: "))

# calling the linearSearch() function
result = linearSearch(list_1, size, key)

# printing the conclusion
if result == -1:
    print(f"{key} is not found in the list")
else:
    print(f"{key} is found at position {result + 1} in the list")
