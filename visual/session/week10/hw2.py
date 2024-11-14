class SharedFund:
    # 공용 잔고
    deposit = 10000

    # 인스턴스 잔고
    def __init__(self):
        self.deposit = 0

    def __repr__(self):
        return str(self.deposit)

    # 인스턴스 -> 클래스 송금
    def save(self, amount):
        self.deposit -= amount
        SharedFund.deposit += amount

    # 클래스 -> 인스턴스 송금
    def withdraw(self, amount):
        self.deposit += amount
        SharedFund.deposit -= amount

# 1. 인스턴스 2개 생성
a, b = SharedFund(), SharedFund()
print(SharedFund.deposit, a, b)

# 2. 클래스 -> 인스턴스1 10,000. 클래스 인스턴스 잔고 출력
a.withdraw(10000)
print(SharedFund.deposit, a, b)

# 3. 클래스 -> 인스턴스1 10,000. 클래스 인스턴스 잔고 출력
b.save(5000)
print(SharedFund.deposit, a, b)