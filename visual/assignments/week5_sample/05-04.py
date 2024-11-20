class Course:
    def __init__(self, name, code, grade):
        self.name = name
        self.code = code
        self.grade = grade

    def __repr__(self):
        return '[' + str(self.code) + '] ' + str(self.name) + ': ' + str(self.grade) + ' (' + str(self.convert_gpa()) + ')'

    def convert_gpa(self):
        score = 0
        match self.grade:
            case 'A+':
                score = 4.5
            case 'A':
                score = 4
            case 'B+':
                score = 3.5
            case 'B':
                score = 3
            case 'C+':
                score = 2.5
            case 'C':
                score = 2
                
        return score

class CourseManager:
    def __init__(self):
        self.course_list = []

    def calculate_gpa(self):
        score = 0
        for course in self.course_list:
            score += course.convert_gpa()
        score /= len(self.course_list)

        return score

    def find_by_code(self, code):
        for course in self.course_list:
            if course.code == code:
                print(course)
                break
        else:
            print('찾을 수 없습니다.')

    def append(self, course):
        self.course_list.append(course)

manager = CourseManager()

python = Course(name='Python', code=12345, grade='A+')
english = Course(name='English', code=23456, grade='B+')
java = Course(name='Java', code=11111, grade='C+')

manager.append(python)
manager.append(english)
manager.append(java)

print(manager.calculate_gpa())
manager.find_by_code(12345)
manager.find_by_code(123)