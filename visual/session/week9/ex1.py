# 생성자를 정의한 후
class Complex:
    def __init__(self, 
                 realpart, 
                 imagpart):
        self.r = realpart
        self.i = imagpart

# 생성자를 통해 인스턴스를 생성
x = Complex(3.0, -4.5)

# .(dot)을 통한 멤버 변수 접근
print(x.r, x.i)