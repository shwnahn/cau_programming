sum = 0
for value in range(2, 101):
    for i in range(2, value):
        if(value % i) == 0:
            break
    else:
        sum += value

print(sum)