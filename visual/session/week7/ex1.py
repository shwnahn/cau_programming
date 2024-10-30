# 사용자가 입력한 실수 a, b, c를 바탕으로 이차방정식 ax^2 + bx + c = 0의 해를 출력
# 판별식
def determinat(a, b, c):
    D = b ** 2 - 4 * a * c
    
    return D

import math

# 근 구하기
def equation_value(a, b, D):
    if D > 0:
        x1 = -1 * b / 2 * a + math.sqrt(D)
        x2 = -1 * b / 2 * a - math.sqrt(D)
        x = (x1, x2)
    if D == 0:
        x = -1 * b / 2 * a
    if D < 0:
        x = None
    return x 

# 사용자가 실수 입력
a, b, c = input("실수 a, b, c를 입력하세요: ").split(' ')
a = float(a)
b = float(b)
c = float(c)

# 해 출력 (함수)
D = determinat(a, b, c)
x = equation_value(a, b, D)
print(x)