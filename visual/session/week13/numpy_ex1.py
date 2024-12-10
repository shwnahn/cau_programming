import numpy as np

# 12개 숫자 입력
numbers = input().split(' ')
numbers_list = []
for number in numbers:
    number = int(number)
    numbers_list.append(number)

# 가로 순 정렬하여 3x4 행렬로 변환
myarr = np.array(numbers_list).reshape(3, 4)
print(myarr)

# 2. 행별 평균 구하기
# 행별 평균이니까 3x4 -> 3x1, axis=1
# print(myarr.shape)
averages = np.mean(myarr, axis=1)

# 3. 각 행마다 평균보다 큰 수가 몇 개 존재하는지를 3x1 행렬로 출력하여라
avg_arr = np.array([0, 0, 0])
for row in range(myarr.shape[0]):
    cnt = 0
    for num in myarr[row]:
        if num > averages[row]:
            cnt += 1
        avg_arr[row] = cnt

print(avg_arr)

# 1 1 8 8 1 1 1 10 5 5 5 5