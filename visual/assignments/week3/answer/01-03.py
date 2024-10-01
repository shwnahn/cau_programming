is_prime = True
value = 11

number = 2
while number < value:
    if value % number == 0:
        is_prime = False
        break

    number += 1

if is_prime and value > 1:
    print('소수네')
else:
    print('소수가 아니야')

# 이하는 for문 버전입니다.
# value = 7

# for number in range(2, value):
#     if value % number == 0:
#         print('소수가 아니야')
#         break
# else:
#     print('소수네')