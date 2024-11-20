print('{} {}, {}'.format('a', 'b', 'c'))

print('{0}{1}{0}'.format('abra', 'cad'))

coord1 = (3, 5)
coord2 = (6, 8)
print('X: {0[0]:*^15} / Y: {1[1]:!>15}'.format(coord1, coord2))

print('{: f}\n{:-f}'.format(3.14, -3.14))

print('{: >40,}'.format(1234567890))