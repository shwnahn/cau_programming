import matplotlib.pyplot as plt
import numpy as np

# 2차원 점을 x, y 구간 [0, 1] 내에 무작위로 100개 생성하여 산점도로 나타내어라
x = np.random.uniform(0, 1, 100)
y = np.random.uniform(0, 1, 100)

# 이 때, 각 축의 limit를 [0, 1]로, tick을 [0, 0.5, 1]로 설정하여라
fig, ax = plt.subplots()
ax.set_xlim([0, 1])
ax.set_ylim([0, 1])
ax.scatter(x, y, s=25, c='r', marker='h')
ax.set_xticks([0, 0.5, 1])
ax.set_yticks([0, 0.5, 1])

plt.show()