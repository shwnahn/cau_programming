class Library:
    def __init__(self): 
        # 도서 목록 {도서명:학번}, 학번 0이면 대출아님
        self.books = {'파이썬 프로그래밍': 0,
                    'C언어 정복': 0,
                    '맨먼스 미신': 0,
                    '뇌를 자극하는 C언어': 0}
        
        # 대출자 목록 {학번:도서명}
        self.borrowers = {}

    # 대출하기
    def borrow_process(self, book_name, student):
        if student in self.borrowers:
            print("이미 대출 중이므로 추가 대출이 불가능합니다.")
            return

        if book_name in self.books:
            if self.books[book_name] == 0:
                self.books[book_name] = student.id
                self.borrowers[student.id] = book_name
            else:
                print("대출 불가 도서입니다 (대출 중)")
        else:
            print("대출 불가 도서입니다 (보유서고 없음)")

    # 반납하기
    def return_process(self, book_name, student):
        if student.id in self.borrowers:
            self.books[book_name] = 0
            print(self.borrowers.pop(student.id) + " 반납 완료")
        else:
            print("반납 오류 (대출자 목록에 없음)")
    
    # 연장하기

    # 분실처리하기

class Student:
    # 학생 이름, 학과, 학번
    def __init__(self, id, name, major):
        self.id = id
        self.name = name
        self.major = major
    
    def __repr__(self):
        return '[' + str(self.id) + '] ' + str(self.name) + ' (' + str(self.major) + ')'

library = Library()
student1 = Student(20200746, '시환', '교육학과')
student2 = Student(20200776, '서영', '교육학과')
print(library.books)

library.borrow_process('C언어 정복', student1)
library.borrow_process('맨먼스 미신', student2)
print(library.books)
print(library.borrowers)

library.return_process('C언어 정복', student1)
print(library.books)
print(library.borrowers)


library.return_process('C언어 정복', student2)
# print(library.books)
# print(library.borrowers)