class TMoney:
    def __init__(self):
        self.value = 0

    def __repr__(self):
        return str(self.value)

    def charge(self, amount):
        self.value += amount

    def use(self, amount):
        self.value -= amount

x, y = TMoney(), TMoney()
x.charge(10000)
y.charge(10000)
print(x, y)

x.use(1000)
y.use(1000)
print(x, y)