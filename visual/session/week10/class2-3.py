class MyClass:
    value = 0

    def __str__(self):
        return 'MyClass: '
    
    def __repr__(self):
        return '@MyClass: '


x = MyClass()

print(MyClass)
print(MyClass())

print(repr(MyClass()))

print(str(MyClass()))