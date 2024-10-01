points = [
    (1, 1), (2, 2), (3, -1), (4, 0), (-4, 6)
]

# 무게중심 구하기
sum_x = 0
sum_y = 0
for i in range(len(points)):
    sum_x += points[i][0]
    sum_y += points[i][1]

m = ((sum_x / 5), (sum_y / 5))
# print(m)

# 무게중심과의 거리 구하기
distances = []
for i in range(len(points)):
    distance = (points[i][0] - m[0]) ** 2 + (points[i][1] - m[1]) ** 2
    distances.append(distance)

for i in range(len(points)):
    print(distances[i])

# 근데 제곱근 구해야하지않나??