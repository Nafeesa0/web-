def modify_string(input_string):
    if input_string.endswith('ing'):
        return input_string + 'ly'
    else:
        return input_string + 'ing'


user_input = input("Enter a string: ")


result = modify_string(user_input)


print("Modified string:", result)
