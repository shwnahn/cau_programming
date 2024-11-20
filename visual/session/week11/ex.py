inputs = list()
for i in range(5):
    x, y = input("값을 입력하세요:  ").split(' ')
    x = float(x)
    y = float(y)
    inputs.append((x, y))

for i in range(5):
    print(f"{f"[#{i + 1}]":<10}", end='> ')
    print(f"({inputs[i][0]: .2f}, {inputs[i][1]: .2f})")

print(f"{"[Inertia]":<10}", end='> ')


x_avg = sum(point[0] for point in inputs) / len(inputs)
y_avg = sum(point[1] for point in inputs) / len(inputs)
print(f"{f'({x_avg:.2f}, {y_avg:.2f})':>20}")