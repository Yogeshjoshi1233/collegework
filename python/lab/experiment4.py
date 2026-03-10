#Q1
s = input("Enter a string: ")

count = 0  # Variable to store count of uppercase letters
for ch in s:
    if ch.isupper():  # Check if character is uppercase
        count += 1 #increase the count if true

print("Number of capital letters:", count)

#Q2
n = input("Enter a string: ")

vowels = "aeiouAEIOU"  #contains vowel in both upper and lowercase
count = 0 #counter variable

for ch in n:
    if ch in vowels: #checks if character is vowel
        count += 1 #increase the count if true

print("Total vowels:", count)

#Q3
s=input('enter a string:')

words=s.split() #split sentence to words
for word in words: 
    print("word:",word) 

#Q4
S=input('enter a string :\n')
sub=input('enter the sub string :')
count=0 #counter variable 

for i in range (len(S)-len(sub)+1): #traverse string from left to right 
    if S[i:i+len(sub)]==sub: #compare substring with sliced part of the string 
        count+=1 #increase the count 
        print("occurences:",count)

#Q5
s = input("Enter a string: ") 

s = s.upper() #convert the entire string to uppercase
result = {} #dictonary to store 

for ch in s: #traverse through ach character
    if ch.isalpha(): #check is the character is alphabet
        if ch in result: # If character already in dictionary, increase count
            result[ch] += 1
        else: 
            result[ch] = 1  # If character already in dictionary, increase count

for key in sorted(result):  # Print result in sorted order
    print(result[key], key)


#Q6
s = input("Enter a sentence: ")

words = s.split()
unique_words = set(words)  

print("Number of unique words:", len(unique_words))

#Q7
# Create two sets of fruits

n = int(input("Enter number of fruits in each set: "))

s1 = set()
s2 = set()

print("Enter fruits for Set 1:")
for i in range(n):
    s1.add(input())

print("Enter fruits for Set 2:")
for i in range(n):
    s2.add(input())

# a) Common fruits
print("Common fruits:", s1 & s2)

# b) Only in s1
print("Only in Set 1:", s1 - s2)

# c) Total unique fruits
print("Total unique fruits:", len(s1 | s2))
#Q8
s1 = {"Red", "yellow", "orange", "blue"}
s2 = {"violet", "blue", "purple"}

print("Union:", s1 | s2)
print("Intersection:", s1 & s2)
print("Difference S1 - S2:", s1 - s2)
print("Difference S2 - S1:", s2 - s1)
print("Symmetric Difference:", s1 ^ s2)
