num = int(input("Enter the size of the pattern : "))

for i in range(num+1):
    for j in range(i+1):
        print("*",end=" ")
    print()

