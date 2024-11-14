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

class CourseManager:
    def __init__(self):
        self.course_list = []

    # 전체 평점 계산
    def calculate_gpa(self):
        score = 0
        for course in self.course_list:
            score += course.convert_gpa()
        score /= len(self.course_list)

        return score

    # 과목코드 검색
    def find_by_code(self, code):
        for course in self.course_list:
            if code == course.code:
                print(course)
                break
        else:
            print('찾을 수 없음')

    # append
    def append(self, course):
        self.course_list.append(course)

# 1. CourseManager 클래스의 인스턴스에 세 개의 Course 클래스 인스턴스를 입력한다
manager = CourseManager()

korean = Course(name="kor", code=1124, grade="A+")
english = Course(name="eng", code=1252, grade="B+")
math = Course(name="math", code=1253, grade="C")

manager.append(korean)
manager.append(english)
manager.append(math)

# 2. 전체 평점 계산하여 출력
print(manager.calculate_gpa())
manager.find_by_code(1124)
manager.find_by_code(1122)
