# file = open('my_file.txt', 'r')
# print(file.read(5))

# print(file.read(10))

# print(file.read(15))


# file.close()

file = open('my_file.txt', 'r')
print(file.readline(), end='')
print(file.readline())

# print(file.readlines())
file.close()