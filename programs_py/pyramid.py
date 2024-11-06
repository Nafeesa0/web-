def pyramid(steps):
    for i in range(1, steps + 1):
        print(' ' * (steps - i) + ' '.join([str(i)] * i))

input = int(input("Enter the number of steps for the pyramid: "))
if input > 0:
    pyramid(input)
else:
    print("Please enter a positive integer.")
