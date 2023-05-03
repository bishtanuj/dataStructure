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
