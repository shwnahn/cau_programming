# 이전 파일을 지우고 덮어쓰기
file = open('my_file.txt', 'w')
file.write('드디어 쓸모있어보이는걸 배운다.\n')
file.close()
# 이전 파일에서 이어쓰기
file = open('my_file.txt', 'a')
file.write('드디어 쓸모있어보이는걸 배우나?\n')
file.close()
