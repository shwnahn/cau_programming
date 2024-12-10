import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

# Pandas DataFrame에 100x3의 랜덤 데이터를 생성
data = pd.DataFrame(np.random.random((100, 3)))

# 열(column)별 그래프를 각각 나타내기
# 그래프에는 랜덤 데이터들을 산점도로 표시
fig, ax = plt.subplots()
x = data.index
ax.scatter(x, data[0], s=50, c='r', marker='o', label='column 1', alpha=0.5)
ax.scatter(x, data[1], s=50, c='g', marker='o', label='column 2', alpha=0.5)
ax.scatter(x, data[2], s=50, c='b', marker='o', label='column 3', alpha=0.5)

# 데이터의 y값 평균보다 작은 영역에 대해 alpha=0.1의 검정색으로 표시한다
average_value = np.average(data)
print(average_value)
ax.fill_between(x, 0, average_value, color='k', alpha=0.1)

plt.show()
