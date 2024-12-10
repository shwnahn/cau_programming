import matplotlib.pyplot as plt
import numpy as np
import matplotlib as mpl

mpl.rcParams['axes.unicode_minus'] = False
plt.rcParams['font.family'] = 'Nanum Gothic'

# x = np.arange(10, 15)
# y = np.random.random((4, 5))

# fig, axes = plt.subplots(2, 2)
# axes[0][0].plot(x, y[0])
# axes[1][0].plot(x, y[1])
# axes[0][1].plot(x, y[2])
# axes[1][1].plot(x, y[3])

x = np.arange (10, 15)
y = np.random.random (5)
fig, ax = plt.subplots()
ax.plot(x, y)
ax.set_title('-- 굿모닝 대한민국 --')
fig.savefig('file.pdf', dpi=300) 


plt.show()