
list1 = list(map(int, input("Enter the first list of integers : ").split()))
list2 = list(map(int, input("Enter the second list of integers : ").split()))

same_length = len(list1) == len(list2)


same_sum = sum(list1) == sum(list2)


common_values = set(list1).intersection(set(list2))


print("a. Same length:", same_length)
print("b. Same sum:", same_sum)
print("c. Common values:", common_values if common_values else "None")
