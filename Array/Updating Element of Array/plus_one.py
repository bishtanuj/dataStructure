"""
You are given a large integer represented as an integer array digits, where each digits[i]
is the ith digit of the integer. The digits are ordered from most significant to least
significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
"""


def plus_one(digits: list[int]) -> list[int]:
    digits_string = ''.join(str(i) for i in digits)
    digits_int = int(digits_string)
    new_number = digits_int + 1
    digits_new = [int(j) for j in str(new_number)]
    return digits_new


if __name__ == '__main__':
    N = int(input("Enter the elements of the array: "))
    digit = list(map(int, input(f"Enter the {N} elements of array: ").split()))[:N]
    print(plus_one(digit))

