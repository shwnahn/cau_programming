a = ("1", 2.1, True)
b = (1, 2, 2)


print(len(a))

print(a.index(True))

# for문으로 나타내면
for i in range(len(a)):
    if a[i] == True:
        print(i)
        break

# while문으로 나타내면
i = 0
while i < len(a):
    if a[i] == 2.1:
        print(i)
        break
    i += 1