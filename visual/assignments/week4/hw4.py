# 사용자 입력
points = []
for i in range(5):
   x, y = input(f"x,y좌표를 쉼표로 구분하여 점 5개를 입력하세요 ({i}/5): ").split(',')
   x = int(x)
   y = int(y)
   points.append((x, y))
# print(points)

x, y = input("x,y좌표를 쉼표로 구분하여 기준점 1개를 입력하세요: ").split(',')
x = int(x)
y = int(y)
query = [x, y]
# print(query)

# 무게중심과의 거리 구하기
distances = []
for i in range(len(points)):
    d = (points[i][0] - query[0]) ** 2 + (points[i][1] - query[1]) ** 2
    distances.append(d)

# 가장 가까운 점 출력
for i in range(len(distances)):
    if distances[i] == 0:
        distances[i] = 99999999

min_distance = min(distances)
if min_distance == 99999999:
    print("죄다 똑같습니다...")
else:
    result_index = distances.index(min_distance)
    print("가장 가까운 점은...")
    print(points[result_index])
