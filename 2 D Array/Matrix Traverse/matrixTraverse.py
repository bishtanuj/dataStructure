# scanning the number of rows and column
row_num = int(input("Enter the number of rows: "))
col_num = int(input("Enter the number of columns: "))

# defining the 2-D array with initial value is 0
two_d_array = [[0 for col in range(col_num)] for row in range(row_num)]

# scanning the elements of the array
for row in range(row_num):
    for col in range(col_num):
        two_d_array[row][col] = int(input(f"Element[{row}][{col}]: "))

# printing the 2-D array
print("2-D Array:")
print(two_d_array)
