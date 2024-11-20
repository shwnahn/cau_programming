class SharedFund:
    deposit = 10000

    def __init__(self):
        self.deposit = 0

    def __repr__(self):
        return str(self.deposit)
        
    def save(self, amount):
        self.deposit -= amount
        SharedFund.deposit += amount

    def withdraw(self, amount):
        self.deposit += amount
        SharedFund.deposit -= amount

a, b = SharedFund(), SharedFund()
print(SharedFund.deposit, a, b)

a.withdraw(10000)
print(SharedFund.deposit, a, b)

b.save(5000)
print(SharedFund.deposit, a, b)