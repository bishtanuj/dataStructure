# Program to print the second largest element in an array

# Scan the total number of elements
number_of_elements = int(input("Enter the number of elements of array: "))

# Scan the elements of array
print(f"Enter the {number_of_elements} elements of array separated by space: ", end="")
array = list(map(int, input().split()))[:number_of_elements]

# Sort the array
array.sort()

# Invert the sorted array
invert_array = array[::-1]

# Find the second largest element
for i in range(len(array)):
    if invert_array[i] < invert_array[0]:
        second_max_element = invert_array[i]
        break

# Print the second largest elements
print(f"Second largest Element: {second_max_element}")

