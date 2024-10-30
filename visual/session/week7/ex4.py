# 1. 주어진 실수를 소수 넷째자리에서 반올림하고
num = float(input("실수를 입력하세요: "))
num = round(num, 3)

# 2. 절댓값을 취한 후 소수부분만을 자연수로서 사용한다. (즉, 이 자연수는 1000 미만이다)
num = abs(num)
num = num - int(num)
num = int(num * 1000)
# print("number is...")

# 3. 이 때, 1000 미만의 소수 중 가장 가까운 소수를 출력하여라
def is_prime(N):
    is_prime = True
    for i in range(2, N):
        if(N % (i) == 0):
            is_prime = False
            break
    return is_prime

for i in range(1, 1000 - num):
    if(is_prime(num + i)):
        answer = num + i
        break
    if(is_prime(num - i)):
        answer = num - i
        break
    # print(f"+-{i}에는 없네...")

print(answer)