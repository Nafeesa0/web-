str=input("Enter the string : ")
print(str)
k='$'
str2 = str[0] + str[1:] .replace(str[0],k)
print("The string is : ",str2)
