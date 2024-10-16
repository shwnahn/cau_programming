a = {'1' : 1, '2' : 2, '3' : 3}

print(a['3'])
# 3

b = a.get('10') # None

print(b)
print(type(b))

# print(a.setdefault('4', '값이 없어요'))

print(a.keys())
print(a.values())