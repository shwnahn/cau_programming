class Human:
    # 클래스 메서드
    @classmethod
    def class_method(cls):
        print("I'm a class method")
    
    # 정적 메서드
    @staticmethod #생략가능
    def static_method():
        print("I'm a static method")

    # 인스턴스 메서드
    def instance_method(self):
        print("I'm an instance method")

me, you = Human(), Human()

# 클래스 함수
## 클래스가 - 클래스 함수
Human.class_method()
## 인스턴스가 - 클래스 함수
me.class_method()
you.class_method()

# 정적 함수
## 클래스가
Human.static_method()
## 인스턴스가
me.static_method()
you.static_method()

# 인스턴스 함수
## 클래스가 -> Error!
# Human.instance_method()
me.instance_method()
you.instance_method()