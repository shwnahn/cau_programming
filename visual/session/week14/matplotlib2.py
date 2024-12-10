import matplotlib.pyplot as plt
import numpy as np

x = np.arange(10, 15)
y = np.random.random(5)

fig, ax = plt.subplots()

# # 선 그래프 plot
# ax.plot(x, y, linewidth=1, linestyle='-.', markersize=20, marker='*', color='b')

# # 산점도 scatter
# ax.scatter(x, y, s=100, c='b', marker='v', label='test')
# ax.legend()

# # 막대 그래프 bar
# ax.bar(x, y)

## 히스토그램 hist
# fig, axes = plt.subplots(1, 4, figsize=(14, 4))
# data = np.random.random(100)
# axes[0].hist(data, bins=1)
# axes[2].hist(data, bins=5)
# axes[1].hist(data, bins=10)
# axes[3].hist(data, bins=100)

## 가로선 axhline, 세로선 axvline
# ax.plot(x, y)
# ax.axhline(y.mean(), color='r', linestyle='--')
# ax.axvline(x.mean(), color='r', linestyle='--')

# # 채우기 fill_between
# ax.fill_between(x,
#                 y - np.quantile(y, 0.05),
#                 y + np.quantile(y, 0.05),
#                 color='y',
#                 alpha=0.1)



plt.show()

