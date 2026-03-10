#Q1-. Function to Find Maximum and Minimum (Without Built-in Functions)
def find_max_min(numbers):
    max_num = numbers[0]
    min_num = numbers[0]

    for num in numbers:
        if num > max_num:
            max_num = num

        if num < min_num:
            min_num = num

    return max_num, min_num


nums = [10, 6, 8, 90, 12, 56]
result = find_max_min(nums)
print("Maximum:", result[0])
print("Minimum:", result[1])

#Q2-Sum of Cubes of Numbers Smaller Than n
def sum_of_cubes(n):
    total = 0

    for i in range(1, n):
        total = total + i**3

    return total


print(sum_of_cubes(5))

#Q3-Print 1 to n Using Recursion 
def print_numbers(n):
    if n == 0:
        return

    print_numbers(n-1)
    print(n)


print_numbers(5)

#Q4-Fibonacci Series Using Recursion

def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)


def print_fibonacci_terms(terms):
    for i in range(terms):
        print(fibonacci(i), end=" ")


print_fibonacci_terms(6)

#Q5-Lambda Function to Find Volume of Cone

import math

volume_cone = lambda r, h: (1/3) * math.pi * r**2 * h

print(volume_cone(3, 5))

#Q6-. Lambda to Return Tuple of Max and Min

max_min = lambda lst: (max(lst), min(lst))

nums = [10, 6, 8, 90, 12, 56]

print(max_min(nums))

#Q7-Types of Function Arguments
#a)
def student(name, age):
    print("Name:", name)
    print("Age:", age)

student(age=20, name="Ravi")
#b)
def greet(name="Student"):
    print("Hello", name)

greet()
greet("Aman")

#c)
def total_marks(*marks):
    print(sum(marks))

total_marks(10, 20, 30)

#Q8-. Check if All Dictionary Values are Same 
check_same = lambda d: len(set(d.values())) == 1

my_dict = {'a':10, 'b':10, 'c':10}

print(check_same(my_dict))

#Q9-Create Dictionary from Two Lists
list1 = ['a', 'b', 'c']
list2 = [1, 2, 3]

result = dict(zip(list1, list2))

print(result)



