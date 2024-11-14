class MyClass:
    value = 0

    def __init__(self):
        print("I'm born!")
    
    def __del__(self):
        print("I'm dying!")
    

x = MyClass()

print("hi")