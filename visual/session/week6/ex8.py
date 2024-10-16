products = {}
for i in range(5):
    item, price = input("물건, 금액 입력하세요: ").split()
    price = int(price)
    products[item] = price

print(products)

sum = 0
for value in products.values():
    sum += value
print(sum)