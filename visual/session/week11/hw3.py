save_list = list()
with open('test.csv', 'r') as file:
    read_data = file.readline()
    while read_data != '':
        # row = read_data.split(',')
        for item in read_data.split(','):
            item = int(item)
            save_list.append(item)
        read_data = file.readline()
    print(save_list)