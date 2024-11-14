class Coord:
    def __init__(self, *values):
        self.values = tuple(values)

    def __repr__(self):
        return str(self.values)
    
    def __len__(self):
        return len(self.values)

x = Coord(1, 2, 3, 4)

print(len(x))