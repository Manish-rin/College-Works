list2d = [
    [1, 2, 3],
    [4, 5, 6],
]

list1d = []
for matrix in list2d:
    for innermatrix in matrix:
        list1d.append(innermatrix)
print(list1d)
    