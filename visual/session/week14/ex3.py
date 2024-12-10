import matplotlib.pyplot as plt
import numpy as np
import matplotlib as mpl

# 일차함수와 이차함수, 삼차함수를 랜덤하게 생성한 후 한 그림에 세 구획(1x3)으로 나누어 표시하여라
# 이 때, 각 구획별로 ‘일차함수’, ‘이차함수’, ‘삼차함수’를 title로 표시하여라
# 1. ax + b
# 2. ax^2 + bx + c
# 3. ax^3 + bx^2 + cx + d

a1, b1 = np.random.uniform(-10, 10, 2)  # 1차 함수 계수
a2, b2, c2 = np.random.uniform(-10, 10, 3)  # 2차 함수 계수
a3, b3, c3, d3 = np.random.uniform(-2, 2, 4)  # 3차 함수 계수

x = np.linspace(-10, 10, 500)
y1 = a1 * x + b1
y2 = a2 * x**2 + b2 * x + c2
y3 = a3 * x**3 + b3 * x**2 + c3 * x + d3

plt.rcParams["font.family"] = 'Nanum Gothic'
mpl.rcParams['axes.unicode_minus'] = False

# 구획 세 개로 나누기(1x3)
fig, axes = plt.subplots(1, 3)
axes[0].plot(x, y1, 'r-')
axes[0].set_title('일차 함수')
axes[1].plot(x, y2, 'b-')
axes[1].set_title('이차 함수')
axes[2].plot(x, y3, 'g-')
axes[2].set_title('삼차 함수')

plt.show()

