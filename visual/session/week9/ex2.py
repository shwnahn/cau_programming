class Dog:
    kind = 'canine'

    def __init__(self, name):
        self.name = name

d = Dog('Fido')
e = Dog('Buddy')

print(d.kind, e.kind)
print(d.name, e.name)