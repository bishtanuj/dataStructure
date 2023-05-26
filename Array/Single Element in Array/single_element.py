# Program to find the single element in an array

# function to find the single element
def single_element(array: list[int]) -> int:
    for i in range(len(array)):
        singleElement = array.pop(i)
        if singleElement in array:
            array.insert(i, singleElement)
            continue
        else:
            break
    return singleElement


# driver function
if __name__ == '__main__':
    element = int(input("Enter the number of elements of array: "))
    elements_array = list(map(int, input(f"Enter {element} elements of array: ").split()))[:element]
    print(f"Single element in array: {single_element(elements_array)}")

