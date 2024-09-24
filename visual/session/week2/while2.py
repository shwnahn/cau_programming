a, b = 0, 1
while a < 10:
    print(a)
    a, b = b, a + b # 계산보다 더 빨리 대입이 된다.