def is_all_even_digits(n):
    return all(int(d) % 2 == 0 for d in str(n))


start = int(input("Enter the starting number (1000-9999): "))
end = int(input("Enter the ending number (1000-9999): "))

even_digit_squares = [
    i ** 2 for i in range(int(start**0.5), int(end**0.5) + 1)
    if start <= (i ** 2) <= end and is_all_even_digits(i ** 2)
]

print("4-digit perfect squares with all even digits:", even_digit_squares)
