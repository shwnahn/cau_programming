import numpy as np

# data = list(map(float, input("12개의 숫자를 입력하세요 (공백으로 구분): ").split()))
data = np.random.random(12)
print(f'{data=}')
data = np.sort(data)
data = data.reshape(3, 4)
print(f'{data=}')

mean = np.mean(data, axis=1).reshape(3,1)
# mean = np.concatenate((mean, mean, mean, mean), axis=1)
print(f'{mean=}')

for row in range(data.shape[0]):
    size = data[row][data[row] > mean[row]].size
    print(f'[row #{row}] {size}')