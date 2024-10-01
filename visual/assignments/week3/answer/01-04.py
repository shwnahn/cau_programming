# 1...100 반복
value = 1
result = 0
for value in range(1, 101):
    # value가 소수인지 확인
    is_prime = True
    for number in range(2, value):
        if value % number == 0:
            is_prime = False
            break
    else:
        if value == 1:
            is_prime = False

    # 각 숫자가 소수인지 확인 후 소수면 더한다
    if is_prime:
        result += value

print(result)