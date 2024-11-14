class Course:
    # 과목명, 과목코드, 학점정보
    def __init__(self, name, code, grade):
        self.name = name
        self.code = code
        self.grade = grade

    # 과목명, 과목코드, 학점정보, 평점 한 줄로 출력
    def __repr__(self):
        return '[' + str(self.code) + '] ' + str(self.name) + ': ' + str(self.grade) + ' (' + str(self.convert_gpa()) + ')'
    
    # 학점을 평점으로 환산하는 기능
    def convert_gpa(self):
        score = 0
        match self.grade:
            case 'A+':
                score = 4.5
            case 'A':
                score = 4.0
            case 'B+':
                score = 3.5
            case 'B':
                score = 3.0
            case 'C+':
                score = 2.5
            case 'C':
                score = 2.0
            case _:
                score = 0

        return score


# 1. 인스턴스 3개 만들어서 리스트에 삽입

korean = Course(name="kor", code=1124, grade="A+")
english = Course(name="eng", code=1252, grade="B+")
math = Course(name="math", code=1253, grade="C")
course_list = [korean, english, math]

# 2. 리스트 순회하며 내용출력
for course in course_list:
    print(course)