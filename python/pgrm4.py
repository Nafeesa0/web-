
def count_words(sentence):
    words = sentence.split()
    return len(words)


def search_word(sentence, search_term):
    words = sentence.split()
    if search_term in words:
        return True
    else:
        return False


if __name__ == "__main__":
  
    sentence = input("Enter a sentence: ")


    word_count = count_words(sentence)
    print(f"The number of words in the sentence: {word_count}")


    search_term = input("Enter the word to search for: ")

 
    if search_word(sentence, search_term):
        print(f"The word '{search_term}' is present in the sentence.")
    else:
        print(f"The word '{search_term}' is not present in the sentence.")
