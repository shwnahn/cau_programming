class MyClass:
    var1 = 12

    def func1():
        print("This is func1")
    
    class MyInnerClass:
        b = 0

        def func2():
            print("This is func2")


var1 = MyClass.var1
print(var1)

MyClass.func1()

MyClass.MyInnerClass.func2()

