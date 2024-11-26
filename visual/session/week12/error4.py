try:
    raise ArithmeticError
except TypeError:
    print("#### TypeError occurred!")
except ValueError:
    print("#### ValueError occurred!")
except SyntaxError:
    print("#### SyntaxError occurred!")
except ArithmeticError:
    raise ArithmeticError('weird error')
    print("#### ArithmeticError occurred!")
finally:
    print("\n\n#### Finished\n\n")