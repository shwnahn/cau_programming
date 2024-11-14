class Account:
    money = 100000

    # 생성자
    def __init__(self):
        self.money = 0
    
    def get_total_deposit_static():
        return Account.money
    
    @classmethod
    def get_total_deposit(cls):
        return cls.money
    
    def get_my_deposit(self):
        return self.money


myAcc = Account()
myAcc.money += 4000
print(myAcc.get_total_deposit())

# print(myAcc.get_total_deposit_static())

print(Account.get_total_deposit_static())

print(myAcc.get_my_deposit())

print(Account.get_my_deposit(myAcc))