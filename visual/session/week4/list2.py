a = [1]

a.append(10)
print(a)
# >>> ['1', 10]

a.extend([4, 5])
print(a)

# a.sort()
a.sort(reverse=True)
# print(a.sort())
print(a)

print(sorted(a))
print(a)