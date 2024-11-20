# matrix = "1,2,3\n4,5,6\n7,8,9"

# with open('test.csv', 'w') as file:
#     file.write(matrix)

# with open('test.csv', 'r') as file:
#     read_data = file.readline()
#     while read_data != '':
#         print(read_data, end='')
#         read_data = file.readline()

# Challenge
matrix_list = [[1,2,3], [4,5,6], [7,8,9]]

with open('test2.csv', 'w') as file:
    for row in matrix_list:
        file.write(f"{row[0]},{row[1]},{row[2]}\n")

with open('test2.csv', 'r') as file:
    read_data = file.readline()
    while read_data != '':
        print(read_data, end='')
        read_data = file.readline()