size = int(input("Enter the size of the matrices: "))

# Scanning matrix I
print("Enter the elements of Matix I: ")
matrixOne = []
for i in range(size):
    a = []
    for j in range(size):
        a.append(int(input(f"Element [{i}][{j}]: ")))
    matrixOne.append(a)

# Scanning matrix II
print("Enter the elements of Matix I: ")
matrixTwo = []
for i in range(size):
    b = []
    for j in range(size):
        b.append(int(input(f"Element [{i}][{j}]: ")))
    matrixTwo.append(b)

# Printing matix I
print()
print("Matrix I: ")
for i in range(size):
    for j in range(size):
        print(matrixOne[i][j], end = " ")
    print()

# Printing matrix II
print()
print("Matrix II: ")
for i in range(size):
    for j in range(size):
        print(matrixTwo[i][j], end = " ")
    print()

# Computing addition of matrices
Addition = []
for i in range(size):
    c = []
    for j in range(size):
        c.append(matrixOne[i][j] + matrixTwo[i][j])
    Addition.append(c)

# Printing addition of matrices
print()
print("Addition: ")
for i in range(size):
    for j in range(size):
        print(Addition[i][j], end = " ")
    print()
