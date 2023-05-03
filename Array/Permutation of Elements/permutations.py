# Program to find the permutation of elements of an array

from itertools import permutations


# function to find the permutation of an array
def permute(nums: list[int]) -> list[int]:
    perm = permutations(nums)
    K = []
    for i in perm:
        K.append(list(i))
    return K


# driver function
if __name__ == '__main__':
    size = int(input("Enter the number of elements of an array: "))
    elements = list(map(int, input(f"Enter {size} elements: ").split()))[:size]
    permutations_elements = permute(elements)
    print(f"Permutations of an array: {permutations_elements}")

    
    
```
OUTPUT:
Enter the number of elements of an array: 3
Enter 3 elements: 1 2 3
Permutations of an array: [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1]]
```
