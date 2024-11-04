class MyClass:
    value = 'MyClass'

    def __init__(self):
        self.value = "MyClass instance"
    
    class MyInnerClass:
        value = 'MyInnerClass'

        def __init__(self):
            self.value = 'MyInnerClass instance'

print(MyClass.value)
# 'MyClass' 클래스의 변수

print(MyClass.MyInnerClass.value)
# 'MyInnerClass' 클래스의 변수

print(MyClass.MyInnerClass().value)
# 'MyInnerClass instance' # 인스턴스의 변수

print(MyClass().value)
# 인스턴스의 변수

print(MyClass().MyInnerClass.value)
# 클래스의 변수 -> 이거 헷갈림

print(MyClass().MyInnerClass().value)
# 인스턴스의 변수