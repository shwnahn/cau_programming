class Worker:
    NEXT_ID = 10000
    
    def __init__(self, dept_name, name, grade):
        self.dept_name = dept_name
        self.name = name
        self.grade = grade
        self.worker_id = Worker.NEXT_ID
        Worker.NEXT_ID += 1

    def __repr__(self):
        return self.dept_name + ' ' + self.grade + ' ' + self.name + '(' + str(self.worker_id) + ')'


class HRM:
    def __init__(self):
        self.worker_list = []

    def enroll(self, dept_name, name, grade):
        worker = Worker(dept_name=dept_name, grade=grade, name=name)
        self.worker_list.append(worker)
        print('사번은 ' + str(worker.worker_id) + '입니다.')

    def exit(self, worker_id):
        target_worker = None
        for worker in self.worker_list:
            if worker.worker_id == worker_id:
                target_worker = worker
                break
        else:
            print('존재하지 않는 사번입니다.')
            return

        self.worker_list.remove(target_worker)
    
    def print_list(self):
        for worker in self.worker_list:
            print(worker)
            
    def find_by_id(self, worker_id):
        for worker in self.worker_list:
            if worker.worker_id == worker_id:
                print(worker)
                break
        else:
            print('존재하지 않는 사번입니다.')

hrm = HRM()

while True:
    print('작업을 선택하세요.')
    print('  1. 입사')
    print('  2. 퇴사')
    print('  3. 목록')
    print('  4. 조회')
    print('  5. 종료')

    match int(input()):
        case 1:
            dept_name = input('부서명을 입력하세요: ')
            grade = input('직급을 입력하세요: ')
            name = input('이름을 입력하세요: ')
            hrm.enroll(dept_name=dept_name, grade=grade, name=name)
        case 2:
            worker_id = int(input('사번을 입력하세요: '))
            hrm.exit(worker_id)
        case 3:
            hrm.print_list()
        case 4:
            worker_id = int(input('사번을 입력하세요: '))
            hrm.find_by_id(worker_id)
        case 5:
            break