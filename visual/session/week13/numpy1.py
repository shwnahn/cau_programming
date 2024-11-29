import numpy as np

# arr1 = np.array([[1, 2], [3, 4], [5, 6], [7, 8]])
# arr2 = np.array([[-1, 2]])

# print(arr1+arr2)
# print(arr1/arr2)

# print(np.empty((2,3)))

# print(np.empty(2))
# print(np.ones(2))

# print(np.arange(4))
# print(np.arange(1, 10, 2))

# linesp = np.linspace(0, 10, num=11)
# for i in linesp:
#     print(i)
# print(linesp)

arr_2d = np.array([[1,2,3,4], [5,6,7,8], [9,10,11,12]])
arr_2d[:,1] = np.flip(arr_2d[:,1])
print(arr_2d)
print(arr_2d.flatten())