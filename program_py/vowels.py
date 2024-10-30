a = input("Enter the string: ")
vowels = "aeiouAEIOU"  

print("The vowels are:")
for i in a:
    if i in vowels: 
        print(i, end=" ")
