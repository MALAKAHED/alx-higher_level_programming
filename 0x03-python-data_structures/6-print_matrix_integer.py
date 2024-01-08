def print_matrix_integer(matrix=[[]]):
    rows = [', '.join(map(str, row)) for row in matrix]
    matrix_string = '\n'.join(rows)
    print(matrix_string)
