# 값 입력받기
user_value = input("실수 값을 입력해주세요 :")

# 입력받은 값 파싱
x, y = user_value.split(', ')

# 실수로 변환
x = float(x)
y = float(y)

# 튜플로 구성하여 출력
a = (x, y)
print(a)