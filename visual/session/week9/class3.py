class Human:
    # 클래스 변수
    number_of_arms = 2

    # 인스턴스 변수
    def __init__(self):
        self.age = 0

# print(Human.number_of_arms)

# Human.number_of_arms = 4
# print(Human.number_of_arms)

# me = Human()
# print(me.age)

# me.age = 20
# print(me.age)

me, you = Human(), Human()
me.age, you.age = 25, 21

print(me.age, you.age)

print(me.number_of_arms, you.number_of_arms)