import pandas as pd
import numpy as np

# s = pd.Series(np.random.randn(5), name="something")

# print(s)

# d = {"one": [1.0, 2.0, 3.0, 4.0], "two":[4.0, 3.0, 2.0, np.nan]}

# pd_test = pd.DataFrame(d, index=["a", "b", "c", "d"])
# print(pd_test)

# print("==\n")
# print(pd_test.dtypes)

data = pd.DataFrame(np.random.random((4,4)), columns = ['A', 'B', 'C', 'D'])

print(data)
# for index in range(data.shape[1]):
#     column = data.columns[index]
#     print(data[column])

# for column in data:
#     print(f"{column:-^30}")
#     print(data[column])

# for index, series in data.iterrows():
#     print(index, series)
