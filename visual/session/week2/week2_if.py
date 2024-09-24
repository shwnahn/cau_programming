paid = 500

# if paid >= 5000:
#     if paid % 1000 == 0:
#         print("잔돈은 천원 단위입니다.")
#     else:
#         print("잔돈은 백원 단위입니다.")
# else:
#     print("5천원 이상 구매 가능합니다.")

if paid >= 5000 and paid % 1000 == 0:
    print("잔돈은 천원 단위입니다.")

elif paid >= 5000 and paid % 1000 != 0:
    print("잔돈은 백원 단위입니다.")

else:
    print("5천원 이상 구매 가능합니다.")