import random

N = int(input("자연수 N을 입력하세요: "))
myset = set()
for i in range(N):
    random_num = random.randint(1, 100)
    # print(random_num)
    myset.add(random_num)
    # print(myset)

print(len(myset))