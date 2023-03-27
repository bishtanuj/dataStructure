# Program to find the average of the elements of an array
if __name__ == '__main__':
    # Scanning the number of elements of array
    number_of_elements = int(input("Enter the total number of elements: "))

    # Scanning the elements of array
    array = list(map(int, input(f"Enter the {number_of_elements} elements: ").split()))[:number_of_elements]

    # Finding the sum of elements of array
    sum_of_elements = sum(array)

    # Finding the average of elements of array
    average_of_elements = sum_of_elements // number_of_elements

    # Printing the average of elements
    print(f"Average of elements: {average_of_elements}")
    
    
```
OUTPUT:
Enter the total number of elements: 5
Enter the 5 elements: 3 2 6 9 8
Average of elements: 5
```
