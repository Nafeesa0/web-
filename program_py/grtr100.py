user_input = input("Enter numbers separated by spaces: ")
numbers = user_input.split()
for i in range(len(numbers)):
    if int(numbers[i]) > 100:
        numbers[i] = 'over'
print("Processed List:", numbers)
