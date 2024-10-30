# 1. For문 사용
def fibo_1(n, a=0, b=1):
    for i in range(n):
        print(a, end=' ')
        a, b = b, a + b

# 2. 재귀함수 사용
def fibo_2(n, a=0, b=1):
    if n == 0:
        return
    print(a, end=' ')
    n -= 1
    fibo_2(n, b, a + b)

print("For문 활용한 피보나치수열")
fibo_1(10)

print(' ')

print("재귀함수 활용한 피보나치수열")
fibo_2(10)