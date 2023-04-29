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
    print(f"{K}th largest element: {result}")

