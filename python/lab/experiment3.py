#Q1
n = int(input("Enter a number: "))
factorial = 1   # Initialize factorial with 1

if n < 0:
    print("Factorial doesn't exist for negative numbers")
else:
    for i in range(1, n + 1):    # Loop from 1 to n
        factorial = factorial * i    # Multiply factorial with current value of i
    print(f"Factorial of {n} is {factorial}")
#method 2
n = int(input("Enter a number: "))
factorial = 1
i = 1

if n < 0:
    print("Factorial doesn't exist for negative numbers")
else:
    while i <= n:
        factorial = factorial * i
        i = i + 1
    print(f"Factorial of {n} is {factorial}")

#Q2
num = int(input("Enter a number: "))

temp = num  #stores the original number in temp 
digits = len(str(num)) #converts the digit to string 
sum = 0  #sum is intialized to 0 

for d in str(num): 
    sum += int(d) ** digits    # Convert digit to integer, raise it to power of total digits, and add to sum

if sum == temp: #check if the sum is equal to original number 
    print(num, "is an Armstrong number")
else:
    print(num, "is not an Armstrong number")

#Q3
n = int(input("Enter number of terms: "))
first = 0 # first tem of fibonnaci series
second = 1 #second term of the series 
count = 0  #

if n <= 0:
    print("Please enter a positive integer")
else:
    print("Fibonacci series:")
    while count < n:
        print(first, end=" ")
        third = first + second #second number + first number 
         # Update values for the next iteration
        first = second 
        second = third
        count +=1    # Increment the counter

#Q4
n = int(input("Enter a number: \n"))
is_prime = 1  # Assume number is prime (using 1 for True, 0 for False)

if n <= 1:
    is_prime = 0
else:
    for i in range(2, n):
        if n % i == 0:
            is_prime = 0
            break  # No need to check further

if is_prime == 1:
    print(f"{n} is a prime number")
else:
    print(f"{n} is not a prime number")


#Q5
num = int(input("Enter a number: "))

temp = num #original number is stored in temp
rev = 0 #used to store the reversed number 

for digit in str(num): #converts digit into string 
    last = temp % 10 #takes the last number 
    rev = rev * 10 + last # shifting digits left and adding the last digit
    temp = temp // 10   # Remove the last digit from temp using integer division

if rev == num:  #checks if the reverse number is equal to original number 
    print(num, "is a palindrome number")
else:
    print(num, "is not a palindrome number")

#Q6
n = int(input("Enter a number: "))
sum_digits = 0  #sum_digits is intialized to zero  

while n > 0: 
    digit = n % 10  # Extracts the last digit of the number using modulus operator
    sum_digits = sum_digits + digit  # Adds the extracted digit to the sum_digits variable
    n = n // 10  #removes the last digit from n using the interger division

print(f"Sum of digits is {sum_digits}")

#Q7
count = 0
print("Numbers divisible by 5 or 7 between 1 and 100:") 

for i in range(1, 101):     # Loop runs from 1 to 100 
    if i % 5 == 0 or i % 7 == 0: 
        print(i, end=" ")  
        count += 1

print(f"\nTotal count: {count}")

#Q8
string = input("Enter a string: ")
result = ""

for char in string:
    # Check if character is lowercase (a-z have ASCII 97-122)
    if char >= 'a' and char <= 'z':
        # Convert to uppercase by subtracting 32 from ASCII value
        upper_char = chr(ord(char) - 32)
        result = result + upper_char
    else:
        result = result + char

print(f"Uppercase string: {result}")

#Q9
n = int(input("Enter a number: "))

for i in range(1, 11):
    print(f"{n} * {i} = {n * i}")

#Q10
n = 5  # Number of rows

for i in range(n, 0, -1):
    # Print ascending numbers
    for j in range(1, i + 1):
        print(j, end="")
    
    # Print asterisks
    for k in range(n - i):
        print("*", end="")
    
    # Print descending numbers
    for j in range(i, 0, -1):
        print(j, end="")
    
    print()  # Move to next line

#Q11

n = int(input("Enter number of terms: "))
sum_series = 0.0

for i in range(1, n + 1):
    sum_series = sum_series + (1 / i)

print(f"Sum of series up to {n} terms is {sum_series}")

# Alternative with while loop
n = int(input("Enter number of terms: "))
sum_series = 0.0
i = 1

while i <= n:
    sum_series = sum_series + (1 / i)
    i = i + 1

print(f"Sum of series up to {n} terms is {sum_series}")


