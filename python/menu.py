def find_greatest_and_lowest(numbers):
    greatest = numbers[0]
    lowest = numbers[0]
    for num in numbers:
        if num > greatest:
            greatest = num
        if num < lowest:
            lowest = num
    print("Greatest number:", greatest)
    print("Lowest number:", lowest)

def sort_ascending(numbers):
    numbers.sort()
    print("Sorted list:", numbers)

def create_even_list(numbers):
    even_numbers = []
    for num in numbers:
        if num % 2 == 0:
            even_numbers.append(num)
    print("Even numbers:", even_numbers)

def main():
    n = int(input("Enter the number of elements: "))
    numbers = []
    for i in range(n):
        num = int(input("Enter number {}: ".format(i+1)))
        numbers.append(num)

    while True:
        print("\nMenu:")
        print("1. Find greatest and lowest numbers")
        print("2. Sort list in ascending order")
        print("3. Create a list of even numbers")
        print("4. Exit")
        choice = int(input("Enter your choice: "))

        if choice == 1:
            find_greatest_and_lowest(numbers)
        elif choice == 2:
            sort_ascending(numbers)
        elif choice == 3:
            create_even_list(numbers)
        elif choice == 4:
            break
        else:
            print("Invalid choice. Please try again.")

main()

