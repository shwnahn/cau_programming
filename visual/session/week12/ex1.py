result = 0
for trial in range(10):
    try:
        value = int(input("값을 입력하세요: "))
    except Exception as e:
        break
    result += value

print(result)
