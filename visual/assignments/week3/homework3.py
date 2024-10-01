value = 19

for i in range(2, value):
    # print(i)
    if(value % i) == 0:
        print("소수가 아닙니다")
        break
else:
    print("소수입니다")
