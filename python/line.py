n = input("Enter the sentence: ").split()
word_count = {}

for word in n:
    word_count[word] = word_count.get(word, 0) + 1


for word in word_count:
    print(f"{word}: {word_count[word]}")
