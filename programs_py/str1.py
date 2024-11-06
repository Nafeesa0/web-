str=input("Ener the string : ")
x=list(str)
temp=x[0]
x[0]=x[-1]
x[-1]=temp
print(" ".join(x))
