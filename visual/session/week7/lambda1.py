def plus(a, b):
    return a + b

print(plus(10, 20))

print((lambda a, b: a + b)(10, 20))


a, b, c = input("3개의 자연수 입력하세요: ").split(' ')
a = int(a)
b = int(b)
c = int(c)

print((lambda a, b, c: b ** 2 - 4 * a * c)(a, b, c))