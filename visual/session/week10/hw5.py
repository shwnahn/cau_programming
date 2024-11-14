class Complex:
    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary = imaginary
    
    def __repr__(self):
        return str(self.real) + ' + ' + str(self.imaginary) + 'i'
    
    def __add__(self, complex):
        return Complex(self.real + complex.real, self.imaginary + complex.imaginary)

    def __sub__(self, complex):
        return Complex(self.real - complex.real, self.imaginary - complex.imaginary)

    def __mul__(self, complex):
        real_part = self.real * complex.real - self.imaginary - complex.imaginary
        imag_part = self.real * complex.imaginary - self.imaginary * complex.real
        return Complex(real_part, imag_part)

    def __truediv__(self, complex):
        u = self.real
        v = self.imaginary
        x = complex.real
        y = complex.imaginary
        real_part = (u * x + v * y) / x ** 2 + y ** 2
        imag_part = (v * x - u * y) / x ** 2 + y ** 2
        return Complex(real_part, imag_part)


a, b = Complex(1, 2), Complex(2, 3)
print(a)
print(b)
print("---")
print(a + b)
print(a - b)

print(a * b)
print(a / b)