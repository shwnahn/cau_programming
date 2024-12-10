import pandas as pd

# URL에서 CSV 읽기
url = 'https://raw.githubusercontent.com/datasciencedojo/datasets/master/titanic.csv'
df = pd.read_csv(url)

# 타이타닉 데이터 파일로부터 사망자와 생존자에 대한 연령별 운임 평균을 계산하여 파일로 저장하여라
# 계산 결과는 index를 10살 단위 연령으로 하고 column을 사망자와 생존자로 하는 DataFrame이다
# 결측 데이터는 계산에 포함시키지 않는다