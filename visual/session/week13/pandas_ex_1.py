import pandas as pd

# URL에서 CSV 읽기
url = 'https://raw.githubusercontent.com/datasciencedojo/datasets/master/titanic.csv'
df = pd.read_csv(url)

# 데이터의 간단한 통계 확인
print(df.describe())