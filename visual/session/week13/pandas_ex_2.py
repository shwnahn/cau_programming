import pandas as pd

# 데이터 로드
url = 'https://raw.githubusercontent.com/datasciencedojo/datasets/master/titanic.csv'
data = pd.read_csv(url)

survived_male = data[(data['Survived'] == 1) & (data['Sex'] == 'male')].shape[0]
survived_female = data[(data['Survived'] == 1) & (data['Sex'] == 'female')].shape[0]
dead_male = data[(data['Survived'] == 0) & (data['Sex'] == 'male')].shape[0]
dead_female = data[(data['Survived'] == 0) & (data['Sex'] == 'female')].shape[0]

print(f'{'  성비: 여성 100명 당 남성 수  ':-^30}')
print(f'생존자 남녀성비: {(survived_male / survived_female) * 100:.3f}')
print(f'사망자 남녀성비: {(dead_male / dead_female) * 100:.3f}')

# # 생존자와 사망자를 각각 필터링
# survived = df[df['Survived'] == 1]
# not_survived = df[df['Survived'] == 0]

# # 생존자 성별 비율
# survived_gender_ratio = survived['Sex'].value_counts()

# # 사망자 성별 비율
# not_survived_gender_ratio = not_survived['Sex'].value_counts()

# # 결과 출력
# print("생존자 남녀 성비:")
# print(survived_gender_ratio)
# print("\n사망자 남녀 성비:")
# print(not_survived_gender_ratio)