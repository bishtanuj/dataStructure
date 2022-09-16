# Program to delete the element from the array

# scanning the size of the array
size = int(input("Enter the size of the array: "))

# declaring the empty array
array_1 = []

# scanning the elemnts of the array
for i in range(size):
    element = int(input(f"Element {i}: "))
    array_1.append(element)

# printing the array
print("Array:")
for i in range(size):
    print(array_1[i], end=" ")

# scanning the element to delete from array
key = int(input("\nEnter the element to delete: "))

if key in array_1:
    array_1.remove(key)
    print("New Array: ")
    for i in range(size - 1):
        print(array_1[i], end=" ")
else:
    print(f"{key} doesn't exist in the array !!")
