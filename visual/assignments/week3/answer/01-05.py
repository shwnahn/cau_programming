for trial in range(10):
    # 입력
    input_value = int(input('값을 입력하세요: '))
    
    # 정답
    if input_value == value:
        print("승리했습니다.")
        break
    else:
        if input_value > value:
            print('UP')
        else:
            print('DOWN')
else:
    print("실패했습니다.")