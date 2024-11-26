

items = {1, "둘", "3", "4, 5", 6}

for item in items:
    try:
        print(item)
        print(item + 1)
        
    except TypeError:
        print(f"{"  TypeError  ":!^50}")
    else:
        print("에러 없음")
    finally:
        print("\n")