class Complex:
    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary = imaginary

    def __repr__(self):
        if self.real == 0:
            if self.imaginary == 1.0:
                string = 'i'
            elif self.imaginary == -1.0:
                string = '-i'
            elif self.imaginary == 0:
                string = '0'
            else:
                string = str(self.imaginary) + 'i'
        elif self.imaginary == 1.0:
            string = str(self.real) + ' + i'
        elif self.imaginary == -1.0:
            string = str(self.real) + ' - i'
        elif self.imaginary == 0:
            string = str(self.real)
        elif self.imaginary < 0:
            string = str(self.real) + ' - ' + str(-self.imaginary) + 'i'
        else:
            string = str(self.real) + ' + ' + str(self.imaginary) + 'i'
            
        return string

    def __add__(self, complex):
        return Complex(self.real + complex.real, self.imaginary + complex.imaginary)

    def __sub__(self, complex):
        return Complex(self.real - complex.real, self.imaginary - complex.imaginary)
    
    def __mul__(self, complex):
        return Complex(self.real * complex.real - self.imaginary * complex.imaginary,
                      self.real * complex.imaginary + self.imaginary * complex.real)

    def __truediv__(self, complex):
        fraction = complex.real ** 2 + complex.imaginary ** 2
        return Complex((complex.real * self.real + complex.imaginary * self.imaginary) / fraction,
                      (complex.real * self.imaginary - complex.imaginary * self.real) / fraction)

user_input = input('복소수 연산을 입력하세요: ')
tokens = user_input.split(' ')
a, b = Complex(float(tokens[0]), float(tokens[1])), Complex(float(tokens[3]), float(tokens[4]))

match tokens[2]:
    case '+':
        result = a + b
    case '-':
        result = a - b
    case '*':
        result = a * b
    case '/':
        result = a / b

print(result)