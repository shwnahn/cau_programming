print(f'{3.14: f}\n{-3.14:+f}')

print(f'{42:#d}\n{42:#x}')

print(f"{1234567890:,}")

bugs = 'roaches'
count = 13
area = 'living room'
print(f'{" Debugging ":*^19}\n{f"bugs={bugs}":^20}\n{count=}\n{area=}')
print(f'{bugs=:^20}')
print(f'{f"{bugs=}":^20}')