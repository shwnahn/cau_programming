import pandas as pd

# 타이타닉 데이터 파일로부터 연령별 생존자수를 구하여라
# 이 때, 연령은 10살단위(0~9세, 10~19세, …)를 기준으로 하며 연령에 대한 결측 데이터는 제거하여라
url = 'https://raw.githubusercontent.com/datasciencedojo/datasets/master/titanic.csv'
data = pd.read_csv(url)
data = data[data['Survived']==1]
data = data[~pd.isna(data['Age'])]

for age in range(0, 90, 10):
    survivor_count = data[(data['Age'] >= age) & (data['Age'] <= age + 10)].shape[0]
    print(f'{age}대 연령 생존자 수: {survivor_count}명')