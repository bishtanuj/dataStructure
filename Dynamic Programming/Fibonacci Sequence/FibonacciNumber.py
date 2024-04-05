# Program to calculate the the fibonacci number

# function to cmopute fibonacci number
def compute_fibonacci_number(num: int) -> int:
    if num <= 0:
        return "Enter positive number only!!"
    if num == 1:
        return 0
    # initialize the first two Fibonacci numbers
    data = [0, 1]
    if num > 2:
        for i in range(2, num):
            data.append(data[i - 1] + data[i - 2])
    return data[-1]


if __name__ == '__main__':
    num = int(input("Enter the number: "))
    print("Result:", compute_fibonacci_number(num))
