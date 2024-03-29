# Program to find the largest kth element in array

# function to find the largest kth element
def find_kth_largest(nums: list[int], k: int) -> int:
    nums.sort()
    nums_new = nums[::-1]
    return nums_new[k-1]


# Driver function
if __name__ == '__main__':
    number_of_elements = int(input("Enter the number of elements: "))
    array = list(map(int, input(f"Enter {number_of_elements} elements: ").split()))[:number_of_elements]
    K = int(input("Enter the value of K: "))
    result = find_kth_largest(array, K)
    print(f"Result: {result}")


    
```
    OUTPUT 1:
    Enter the number of elements: 6
    Enter 6 elements: 3 2 1 5 6 4
    Enter the value of K: 2
    Result: 5
        
    OUTPUT 2:
    Enter the number of elements: 5 
    Enter 5 elements: 1 2 8 7 9
    Enter the value of K: 5
    Result: 1
```
