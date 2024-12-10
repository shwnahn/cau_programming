import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

# Pandas DataFrame에 10x7로 랜덤 데이터를 생성
data = pd.DataFrame(np.random.random((10, 7)))

# 열별 선 그래프를 한 그림으로 나타내어라
fig, ax = plt.subplots()
x = data.index
ax.plot(x, data[0], linewidth=1, linestyle='-', markersize=5, marker='o', color='r')
ax.plot(x, data[1], linewidth=1, linestyle='-', markersize=5, marker='*', color='g')
ax.plot(x, data[2], linewidth=1, linestyle='-', markersize=5, marker='v', color='b')

# x축의 tick은 0 ~ 6이며 imit 또한 [0, 6]으로 설정한다.
# tick label은 0 ~ 6 대신 Mon, Tue, Wed, Thu, Fri, Sat, Sun을 사용한다
ax.set_xlim([0, 6])
ax.set_xticks([0, 1, 2, 3, 4, 5, 6],
              ['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat', 'Sun'])
max_value = data.values.max()
min_value = data.values.min()
avg_value = (max_value + min_value) / 2
ax.set_yticks([min_value, avg_value, max_value])
# y축의 tick은 3개로 하며 limit 또한 가장 작은 tick과 가장 큰 tick으로 제한한다
# 가장 작은 tick과 큰 tick은 데이터 중 최솟값과 최댓값이며 중간 tick은 이 둘의 평균으로 한다

plt.show()
