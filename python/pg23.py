def check_number():
    try:
        number = float(input("Enter a number: "))
        if number > 0:
            print("The number is positive.")
        elif number < 0:
            print("The number is negative.")
        else:
            print("The number is zero.")
    except ValueError:
        print("Please enter a valid number.")

check_number()
