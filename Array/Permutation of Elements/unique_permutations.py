# Program to find the unique permutations of elements of an array

from itertools import permutations


# function to find the unique permutations of an array
def unique_permute(nums: list[int]) -> list[int]:
    perm = permutations(nums)
    K = []
    for i in perm:
        K.append(list(i))
    J = []
    for i in K:
        if i not in J:
            J.append(i)
    return J


# driver function
if __name__ == '__main__':
    size = int(input("Enter the number of elements of an array: "))
    elements = list(map(int, input(f"Enter {size} elements: ").split()))[:size]
    permutations_elements = unique_permute(elements)
    print(f"Unique permutations of an array: {permutations_elements}")


```
OUTPUT:
Enter the number of elements of an array: 3
Enter 3 elements: 1 1 2
Unique permutations of an array: [[1, 1, 2], [1, 2, 1], [2, 1, 1]]
```
