# Hello World 저장
with open('test.txt', 'w') as file:
    file.write("Hello world!\n")

# 다시 읽어서 출력
with open('test.txt', 'r') as file:
    print(file.readline())

# return 이어 저장
with open('test.txt', 'a') as file:
    file.write("return\n")

# 다시 읽어서 출력
with open('test.txt', 'r') as file:
    texts = file.readlines()

    for i in range(len(texts)):
        print(texts[i])