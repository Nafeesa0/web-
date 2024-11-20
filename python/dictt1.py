student = {

    'name': input("Enter the student's name: "),

    'roll_no': input("Enter the student's roll number: "),

    'register_no': input("Enter the student's register number: "),

    'dept': input("Enter the student's department: "),

    'sem': int(input("Enter the student's semester: "))

}
print("Entered student details:", student)
total_mark = int(input("Enter the student's total mark: "))
student['total_mark'] = total_mark
if total_mark >= 90:
    grade = 'A'
elif total_mark >= 82:
    grade = 'B'
elif total_mark >= 75:
    grade = 'C'
elif total_mark >= 60:
    grade = 'D'
elif total_mark >= 50:
    grade = 'P'
else:
    grade = 'F' 

student['grade'] = grade
print("\nUpdated student details:", student)
del student['roll_no']
print("\nstudent details after rollno deletion:", student)
