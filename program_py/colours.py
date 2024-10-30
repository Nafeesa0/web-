a=[]
n=int(input("Enter the no.of colours :"))
for i in range(n):
    colours=input("Enter the colours : ")
    a.append(colours)
    
if a:
    print("List of colours:", a)
    print("First colour:", a[0])
    print("Last colour:", a[-1])
