

a = input("Enter the first list : ").split()
b = input("Enter the second list: ").split()
for i in range(len(a)):
   a[i] = int(a[i])
for i in range(len(b)):
   b[i] = int(b[i])
if len(a) == len(b):
    print("The lists are of the same length.")
else:
    print("The lists are of different lengths.")
if sum(a) == sum(b):
    print("The lists sum to the same value.")
else:
    print("The lists sum to different values.")
common_values = set(a) & set(b) 
if common_values:
    print("Common values:", common_values)
else:
    print("No common values.")
