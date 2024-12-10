import numpy as np

data = np.random.random((10, 10))
np.savetxt('data.csv', data)

data = np.loadtxt('data.csv')
print(data)

new_data = np.zeros((5,5))
for row in range(5):
    for column in range(5):
        new_data[row, column] = data[row*2:(row+1)*2, column*2:(column+1)*2].sum()

print(new_data)

np.savetxt('sorted_data.csv', new_data)