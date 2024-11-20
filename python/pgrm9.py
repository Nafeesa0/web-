
# Function to read a number from the user
def read_number():
    while True:
        num = input("Enter a number (minimum 4 digits): ")
        if len(num) >= 4 and num.isdigit():
            return num
        else:
            print("Please enter a valid number with at least 4 digits.")

# Function to find the reverse of the number
def reverse_number(num):
    reverse = num[::-1]  # Reversing the string using slicing
    return reverse

# Main program
if __name__ == "__main__":
    # Read the number from the user
    number = read_number()
    
    # Find the reverse of the number
    reversed_num = reverse_number(number)
    
    # Display both the original number and its reverse
    print(f"The original number is: {number}")
    print(f"The reverse of the number is: {reversed_num}")
