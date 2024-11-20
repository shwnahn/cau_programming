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

python = Course(name='Python', code=12345, grade='A+')
english = Course(name='English', code=23456, grade='B+')
java = Course(name='Java', code=11111, grade='C+')

course_list = [python, english, java]
for course in course_list:
    print(course)