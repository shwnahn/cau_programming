class MyClass:
    def __init__(self):
        print("I'm born!")

    def __del__(self):
        print("I'm dying...")
    
    def __repr__(self):
        return 'MyClass'
    
myClass = MyClass()

print('Class has been made')

print(myClass)

print('All jobs have been finished!')