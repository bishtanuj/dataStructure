# scanning the size of the array
size = int(input("Enter the number of element to store in array: "))

# declaring the empty array
array_1 = []

# scanning the elements of the array
print(f"Enter the {size} elements of the array: ")
for i in range(size):
    element = int(input(f"Element {i}: "))
    array_1.append(element)

# printing the array
print("Array:", end=" ")
for i in range(size):
    print(array_1[i], end=" ")
