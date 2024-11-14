# T-money 클래스
class Tmoney:
    # 잔액 변수 (인스턴스 변수)
    def __init__(self):
        self.value = 0

    def __repr__(self):
        return str(self.value)

    # 충전 기능
    def charge(self, amount):
        self.value += amount

    # 사용 기능
    def use(self, amount):
        self.value -= amount


# 1. 인스턴스 만들기
a, b = Tmoney(), Tmoney()

# 2. 충전 후 잔액 출력
a.charge(10000)
b.charge(10000)
print(a, b)

# 3. 사용 후 잔액 출력
a.use(1000)
b.use(1000)
print(a, b)