import numpy as np

# 1. 10x10 랜덤 행렬을 만든 후 이를 data.csv 파일로 저장하여라
rand_arr = np.random.random((10, 10))
np.savetxt('data.csv', rand_arr, delimiter=',')

# 2. 저장된 data.csv 파일을 읽어 들인 후 행과 열을 두 개씩 짝지어 합하여라 (1행+2행, 3행+4행, …)
loaded_arr = np.loadtxt('data.csv', delimiter=',')

result_1, result_2, final_result = [], [], []
for i in range(0, loaded_arr.shape[0], 2):
    sum = loaded_arr[i] + loaded_arr[i+1]
    result_1.append(sum)

result_1 = np.array(result_1)

for i in range(0, loaded_arr.shape[1], 2):
    sum = result_1[:, i] + result_1[:, i+1]
    result_2.append(sum)

result_2 = np.array(result_2)

# 3. 열별 오름차순으로 정렬한 후 sorted_data.csv 파일로 저장하여라

sorted_result = np.sort(result_2, axis=0)  # 열별로 정렬

np.savetxt('sorted_data.csv', sorted_result, delimiter=',')