import random

count = 0
m = set()
for i in range(1, 10 + 1):
    m.add(i)
print(m)

for try_count in range(100):
    n_list = list()
    for i in range(1, 100 + 1):
        n_list.append(i)
    random.shuffle(n_list)
    n = set(n_list[:5])

    if n < m:
        # print(n)
        count += 1
        # print(count)

print(str(count) + "번")