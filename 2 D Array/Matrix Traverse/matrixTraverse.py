# Scanning the size of row of the matrix
rowSize = int(input("Enter the number of rows: "))

# Scanning the size of row of the matrix
columnSize = int(input("Enter the number of columns: "))

# Scanning the matrix
matrix = []
for i in range(rowSize):
    a = []
    for j in range(columnSize):
        a.append(int(input(f"Element [{i}][{j}]: ")))
    matrix.append(a)

# Printing the matrix
print()
print("Matrix: ")
for i in range(rowSize):
    for j in range(columnSize):
        print(matrix[i][j], end = " ")
    print()
