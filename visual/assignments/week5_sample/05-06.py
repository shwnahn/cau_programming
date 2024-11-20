class Library:
    def __init__(self):
        self.book_dict = {
            'C프로그래밍': None,
            '파이썬': None,
            '영어': None
        }

    def borrow(self, book_name, student_id):
        if book_name not in self.book_dict:
            print('소장하지 않은 도서입니다.')
            return

        if self.book_dict[book_name] is not None:
            print('이미 대여된 도서입니다.')
            return

        if student_id in self.book_dict.values():
            print('대출한 도서를 먼저 반납하시기 바랍니다.')
            return

        self.book_dict[book_name] = student_id

    def return_book(self, book_name, student_id):
        if (book_name not in self.book_dict) or (self.book_dict[book_name] is None):
            print('반납 대상 도서가 아닙니다.')
            return

        if student_id not in self.book_dict.values():
            print('대출 이력이 없습니다.')
            return

        self.book_dict[book_name] = None

library = Library()

while True:
    print('작업을 선택하세요.')
    print('  1. 대출')
    print('  2. 반납')
    print('  3. 종료')

    match int(input()):
        case 1:
            book_name = input('도서명을 입력하세요: ')
            student_id = input('학번을 입력하세요: ')
            library.borrow(book_name, student_id)
        case 2:
            book_name = input('도서명을 입력하세요: ')
            student_id = input('학번을 입력하세요: ')
            library.return_book(book_name, student_id)
        case 3:
            break