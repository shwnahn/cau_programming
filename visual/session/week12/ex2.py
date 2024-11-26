import math

def solve(a, b, c):
    try:
        d = math.sqrt(b ** 2 - 4 * a * c)
    except:
        print("# Error")
        return -9999, -9999

    x1 = (-b + d) / (2 * a)
    x2 = (-b + d) / (2 * a)
    return x1, x2

a, b, c = -1, 0, -20

try:
    print(solve(a, b, c))
except Exception as e:
    print('Error occured')
    # print(repr(e))
    # raise