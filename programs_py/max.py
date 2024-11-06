
a = input("Enter a list of numbers: ")
I = list(map(int, a.split()))

if I:
    max_value = max(I)       
    min_value = min(I)      
    count=len(I)     
    reversed_list = I[::-1] 
    total_sum = sum(I)     
    sorted_list = sorted(I)   

    
    print(f"Maximum value: {max_value}")
    print(f"Minimum value: {min_value}")
    print(f"count of the list: {count}")
    print(f"Reversed list: {reversed_list}")
    print(f"Sum of the values: {total_sum}")
    print(f"Sorted list: {sorted_list}")
else:
    print("The list is empty.")
