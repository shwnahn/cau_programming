class Int:
    val = -1

    def myAbs():
        return abs(Int.val)
    
    class PosiInt:
        val = 2

        def square():
            return Int.PosiInt.val ** 2
    

# print(Int.val, Int.myAbs())

# print(Int.PosiInt.val)

# print(Int.PosiInt.square())

Int.val, Int.PosiInt.val = -10, 20
print(Int.val, Int.PosiInt.val)

Int.PosiInt.val = abs(Int.val)
print(Int.PosiInt.val)