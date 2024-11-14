class MyClass:
    def instance_method(self):
        print(f"Instance method called by {self}")


myClass = MyClass()

myClass.instance_method()

MyClass.instance_method(myClass)