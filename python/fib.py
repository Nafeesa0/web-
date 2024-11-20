num = int(input("Enter the limit: ")) 
a = 0
b = 1
print(f"{a} {b}", end=" ")

for i in range(3, num + 1):
    c = a + b
    print(f"{c}", end=" ")
    a = b
    b = c
