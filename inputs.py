#lee las dimensiones de la matriz desde la terminal
dimensions = input()
rows, cols = map(int, dimensions.split())

matrix = []

for i in range(rows):
    row = []
    for j in range(cols):
        element = int(input())
        row.append(element)
    matrix.append(row)

#print matrix
print("La matriz ingresada es:")
for row in matrix:
    print(row)