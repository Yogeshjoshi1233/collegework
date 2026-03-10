#Q
def count_vowels_consonants(string):
    vowels = "aeiouAEIOU"  
    vowel_count = 0
    consonant_count = 0

    for char in string:
        if char.isalpha():  # Check only alphabet characters
            if char in vowels:
                vowel_count += 1
            else:
                consonant_count += 1

    return vowel_count, consonant_count


text = "Hello World"
v, c = count_vowels_consonants(text)
print(f"Vowels: {v}, Consonants: {c}")

#Q
def is_palindrome(string):
    # Remove spaces and convert to lowercase
    string = string.replace(" ", "").lower()
    return string == string[::-1]


print(is_palindrome("racecar"))  
print(is_palindrome("A man a plan a canal Panama"))
#Q
def word_frequency(text):
    words = text.lower().split()
    frequency = {}

    for word in words:
        if word in frequency:
            frequency[word] += 1
        else:
            frequency[word] = 1

    return frequency


text = "hello world hello code world"
print(word_frequency(text))
#Q
def remove_duplicates(string):
    result = ""
    seen = set()

    for char in string:
        if char not in seen:
            result += char
            seen.add(char)

    return result


print(remove_duplicates("programming"))
#Q
def caesar_cipher(text, shift):
    result = ""

    for char in text:
        if char.isalpha():
            start = ord('A') if char.isupper() else ord('a')
            shifted = chr((ord(char) - start + shift) % 26 + start)
            result += shifted
        else:
            result += char

    return result


text = "Hello World"
encrypted = caesar_cipher(text, 3)
print("Encrypted:", encrypted)

decrypted = caesar_cipher(encrypted, -3)
print("Decrypted:", decrypted)