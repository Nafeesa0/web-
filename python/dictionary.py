def calculate_grade(total_marks):
    if total_marks >= 90:
        return 'A'
    elif total_marks >= 82:
        return 'B'
    elif total_marks >= 75:
        return 'C'
    elif total_marks >= 60:
        return 'D'
    elif total_marks >= 50:
        return 'P'
    else:
        return 'F'

name = input("Enter student's name: ")
roll_number = int(input("Enter roll number: "))
register_number = input("Enter register number: ")
department = input("Enter department: ")
semester = int(input("Enter semester: "))
total_marks = int(input("Enter total marks: "))

student_details = {
    'name': name,
    'roll_number': roll_number,
    'register_number': register_number,
    'department': department,
    'semester': semester,
    'total_marks': total_marks
}

grade = calculate_grade(total_marks)

student_details['grade'] = grade

print(student_details)
del student_details['roll_number']

print(student_details)
