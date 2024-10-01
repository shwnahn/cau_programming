# 사용자가 세 정수를 입력 (A < B)
a, b, c = 5, 10, 11

# 만약 c < a면 a 출력
if c < a:
    print(a)

# 만약 c > b면 b 출력
elif c > b:
    print(b)
    
# 둘 다 아니라면 (a+b)/2 출력
else:
    print((a+b)/2)