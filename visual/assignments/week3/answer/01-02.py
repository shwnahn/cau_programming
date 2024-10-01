grade = 'A'
repeat = False

match grade:
    case 'A+':
        if repeat:
            gpa = 4
        else:
            gpa = 4.5
    case 'A':
        gpa = 4
    case 'B+':
        gpa = 3.5
    case 'B':
        gpa = 3
    case 'C+':
        gpa = 2.5
    case 'C':
        gpa = 2
    case 'D+':
        gpa = 1.5
    case 'D':
        gpa = 1
    case 'F':
        gpa = 0

print(gpa)