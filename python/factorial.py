n = int(input("Enter the limit: "))
fact = 1
for i in range(1, n + 1):
    fact *= i
print("The factorial of " ,n, "is" ,fact)
