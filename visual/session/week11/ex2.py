# file = open('testfile.txt', 'w')
# file.write('testing...\n')
# file.close()

# file = open('testfile.txt', 'a')
# file.write('test22')
# file.close()

# file = open('testfile.txt', 'r')
# # print(file.readlines())
# print(file.read(5))
# print(file.read(5))
# file.close()

with open('testfile.txt', 'r') as file:
    print(file.readlines())
    print(file.tell())

