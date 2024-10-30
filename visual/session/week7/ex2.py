## 입력된 자연수가 소수인지 아닌지를 판단하는 is_prime 함수
def is_prime(N):
    is_prime = True
    for i in range(N-2):
        # print(i+2)
        if(N % (i+2) == 0):
            # print(i+2)
            # print("나누어떨어지는데?")
            is_prime = False
            break
    return is_prime

## 사용자가 입력한 자연수 이하의 모든 소수의 개수를 출력

# 사용자 입력
N = int(input("자연수를 입력하세요: "))

# is_prime 으로 개수 카운트
count = 0
for i in range(2, N):
    # i=2부터 N까지 반복
    if is_prime(i):
        count += 1
# 소수 개수 출력
print(count)
    
