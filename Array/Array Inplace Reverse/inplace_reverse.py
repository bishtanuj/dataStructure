# Program to reverse the array without using extra space

# function to reverse the array
def reverse_array(array: list[int]) -> list[int]:
    i = 0
    j = len(array) - 1
    while i != j:
        temp = array[i]
        array[i] = array[j]
        array[j] = temp
        i += 1
        j -= 1
    return array


# driver function
if __name__ == '__main__':
    number_of_elements = int(input("Enter the number of elements in an array: "))
    elements_array = list(map(int, input(f"Enter {number_of_elements} elements: ").split()))[:number_of_elements]
    print(f"Reverse Array: {reverse_array(elements_array)}")

