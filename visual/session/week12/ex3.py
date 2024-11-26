import math

def solve(a, b, c):

    x1 = (-b + math.sqrt(b ** 2 - 4 * a * c)) / (2 * a)
    x2 = (-b + math.sqrt(b ** 2 - 4 * a * c)) / (2 * a)
    return x1, x2

a, b, c = 1, -2, 1

try:
    print(solve(a, b, c))
except Exception as e:
    print('Error occured')
    # print(repr(e))
    # raise