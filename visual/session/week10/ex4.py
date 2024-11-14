class Bag:
    def __init__(self):
        self.data = []
    
    def add(self, x):
        self.data.append(x)
    
    def addtwice(self, x):
        self.add(x)
        self.add(x)


bag = Bag()
bag.addtwice(10)
bag.add(15)
print(bag.data)
