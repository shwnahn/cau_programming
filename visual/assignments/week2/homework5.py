value = 40
chance = 10
game_won = False

while chance > 0:
    guess = int(input("값을 추측하세요: "))
    if guess == value:
        game_won = True
        break
    else:
        chance -= 1
        print(f"Chance: {chance}")
        if guess > value:
            print("UP")
        else:
            print("DOWN")

if game_won:
    print("승리했습니다")
else:
    print("실패했습니다")
