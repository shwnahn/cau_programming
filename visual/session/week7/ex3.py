
# f(x) = ax^2 + bx + c이고
# g(x) = asin(bx) + c일 때
# 사용자가 입력한 실수 a, b, c, n에 대하여 f(g(n))를 구하여라
# 단, f(x)와 g(x) 계산은 함수로서 구현한다

import math

def f(a, b, c, x):
    return a * (x ** 2) + b * x + c

def g(a, b, c, x):
    return a * math.sin(b * x) + c

a, b, c, x = input("실수 a, b, c, x를 입력하세요: ").split(' ')
a = float(a)
b = float(b)
c = float(c)
x = float(x)


print(f(a, b, c, g(a, b, c, x)))