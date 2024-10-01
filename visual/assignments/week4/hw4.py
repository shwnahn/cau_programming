# 사용자 입력
user_input = input("스페이스바로 구분하여, 점 5개를 입력하세요: ")
points = user_input.split(" ")

user_input_f = input("기준점 1개를 입력하세요: ")

query = list(user_input_f)

# points = [
#     (0, 0), (0, 0)
# ]
# query = [0, 0]

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
    print(points[result_index])
