student = {
    'name': input("Enter the student's name: "),
    'roll_no': input("Enter the student's roll number: "),
    'register_no': input("Enter the student's register number: "),
    'dept': input("Enter the student's department: "),
    'sem': int(input("Enter the student's semester: "))
}


print("\nEntered Student Details:")
print(f"Name           : {student['name']}")
print(f"Roll Number    : {student['roll_no']}")
print(f"Register No    : {student['register_no']}")
print(f"Department     : {student['dept']}")
print(f"Semester       : {student['sem']}")


total_mark = int(input("\nEnter the student's total mark: "))
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


print("\nUpdated Student Details:")
print(f"Name           : {student['name']}")
print(f"Roll Number    : {student['roll_no']}")
print(f"Register No    : {student['register_no']}")
print(f"Department     : {student['dept']}")
print(f"Semester       : {student['sem']}")
print(f"Total Marks    : {student['total_mark']}")
print(f"Grade          : {student['grade']}")

del student['roll_no']

print("\nStudent Details After Roll No Deletion:")
for key, value in student.items():
    print(f"{key.title():<15}: {value}")
