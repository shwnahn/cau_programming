word_dict = dict()

# 파일 읽기
with open('session/week11/hamlet.txt', 'r') as file:
    read_data = file.readline()
    while read_data != '':
        text_line = read_data.split()
        for text in text_line:
            if text in word_dict:
                word_dict[text] += 1
            else:
                word_dict[text] = 1
        read_data = file.readline()

with open('result.csv', 'w') as file:
    for word, count in word_dict.items():
        file.write(f"{word}, {count}\n")

# print(word_dict)
