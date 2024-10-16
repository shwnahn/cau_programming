a = {1, 2, 3, 4, 5}

# a.discard(3)
# print(a)
# {1, 2, 3, 4, 5} discard는 없는 걸 지워도 에러가 안 난다...
# a.remove(10)
# ERROR!

# a.add(19)
# print(a)

# a.add("daf")
# print(a)

f_a = frozenset(a)
print(f_a)
f_a = tuple(f_a)
print(f_a)
a.add(f_a)
print(a)
a.add((10, 2))
print(a)