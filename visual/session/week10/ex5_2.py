
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
    
    def save(self, amount):
        if self.money >= amount:
            self.money -= amount
            Account.money += amount
    
    def withdraw(self, amount):
        if Account.money >= amount:
            Account.money -= amount
            self.money += amount


book = Account()

book.withdraw(20000)
book.save(1000)
book.withdraw(120000)

print(book.get_total_deposit())

print(book.get_my_deposit())
