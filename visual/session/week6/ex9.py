limit = int(input("허용 중복 수를 입력하세요: "))
values = input("값을 입력하세요: ").split()

for i in range(10):
    values[i] = int(values[i])
print(values)

count = dict.fromkeys(values, 0)
for i in range(10):
    # print(values[i])
    # print(count[values[i]])
    count[values[i]] += 1

print(count)

limit_count = 0
for key in count:
    if count[key] > limit:
        print(key)
        limit_count += 1

print("중복된 수" + str(limit_count))