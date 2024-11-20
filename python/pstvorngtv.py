state = 0

while state!=2:

    num = int(input("\nEnter the number:"))

    if num>0:
        print("The number is +VE\n")

    elif num<0:
        print("Number is -VE\n")

    else:
        print("it Zero\n")
        
    state = int(input("1.Restart or 2.Stop:\n"))
