lst = [1,-56,-45,67,34,78,-1,0,5]
pos = []
size = len(lst)
print("List of Positive numbers:\n")

for i in range(size):
    if lst[i]>0:
        pos.append(lst[i])
print(pos)
