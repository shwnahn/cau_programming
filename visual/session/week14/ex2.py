import matplotlib.pyplot as plt
import numpy as np

# 일차함수와 이차함수, 삼차함수를 랜덤하게 생성한 후 한 그림에 전부 표시하여라
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

fig, ax = plt.subplots()
ax.plot(x, y1, 'r-')
ax.plot(x, y2, 'b-')
ax.plot(x, y3, 'g-')

ax.axhline(0, color='black', linewidth=1, linestyle='--')  # x축
ax.axvline(0, color='black', linewidth=1, linestyle='--')  # y축

plt.show()

