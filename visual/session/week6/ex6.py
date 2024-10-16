import random

# 비복원 추출 - 이미 뽑힌 값은 다시 뽑히지 않는다.

# 자연수 45까지 순서 랜덤으로 lotto 집합에 삽입
lotto = set()
for i in range(6):
    num = random.randint(1, 45)
    while num in lotto:
        # print(f'다시뽑을게요.. 번호 겹침')
        num = random.randint(1, 45)
    # print(f"{i + 1} 번째 숫자... {num}")
    lotto.add(num)
    # print(lotto)

# lotto_list = list()
# for i in range(1, 45 + 1):
#     lotto_list.append(i)
# random.shuffle(lotto_list)
# lotto = lotto_list[:6]


user_lotto = input("로또 번호를 맞춰보세요: ").split()

for i in range(6):
    user_lotto[i] = int(user_lotto[i])

user_lotto = set(user_lotto)
# print(user_lotto)

# print(user_lotto.intersection(lotto))
print(str(len(user_lotto.intersection(lotto))) +  "개")