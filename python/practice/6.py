#Q1
char=input("Enter a character: ")

if char in "aeiouAEIOU":   
    print(char, "is a vowel")
else:
    print(char, "is a consonant")

#Q2

age=int(input('enter age: \n'))

if age>18:
    print("you are eligible to vote \n")
else:
    print("you are not eligible to vote ")

#Q3
cp=float(input('enter the price :\n'))
sp=float(input('enter the selling price :\n'))

if sp >cp:
    print("profit")
elif sp<cp:
    print("loss")
else:
    print("no profit , no loss")

#Q5
a=float(input('enter the angle(a):\n'))
b=float(input('enter the second angle(b):\n'))
c=float(input('enter the third angle (c);\n'))

sum=a+b+c

if sum==180:
    print("It is a triangle \n")
else :
    print("It is not a triangle")


#Q4
ch=input('enter the character : \n')
if ch >= 'a' and ch <= 'z' or ch >= 'A' and ch <= 'Z': 
    print("it is a character \n")
elif ch >= '0' and ch <= '9':
    print('it is a number \n')
else:
    print("It is a special character \n")

#Q6


x=float(input('enter the number of units consumed :\n'))
#x=units
if x <= 100:
    bill = x * 2
else:
    if x <= 200:
        bill = (100 * 2) + (x - 100) * 3
    else:
        bill = (100 * 2) + (100 * 3) + (x - 200) * 5

print("Electricity Bill: ₹", bill)

#Q7
t_classes=int(input("total classes : \n")) #t_classes = total classes
a_classes=int(input('total classes attended :\n')) #a_classes = total classes attended

attendence=a_classes/t_classes*100

print("attendence :\n",attendence)

if attendence >=75:
    print("Student is eligible to appear iin the exam \n")
else:
    print('Student is not eligible to appear in the exam\n')

#Q8
temp=float(input('temperature (c): \n'))
if temp>=30:
    print("Hot\n")
elif  16<=temp>=30:
    print('moderate\n')
elif 1<=temp<=15:
    print('cold\n')
else: #if temp<=0
    print('very cold')   

#Q9
password=input("enter the password: \n")
if len(password) <6:
    print("weak\n")
elif   6<len(password)<12:
    print('medium')
elif len(password)>12:
    print('strong')
else:
    ("no entry")

#Q10
salary=float(input('enter the salary of the person ;\n'))
year=float(input('years of service:\n'))

if year>=5:
    bonus=salary*0.10
else:
    bonus=salary*0.5

print('bonus:',bonus)

#Q11
num=int(input('enter the number ; \n'))

if num>0:
    print("positive\n")
elif num<0:
    print("negative\n")
else:
    print('zero')

#Q12

num=int(input('enter the number ;\n'))

if num % 7 == 0:
    print("number is divisible by 7\n")
else:
    print("number is not divisible by 7\n")

#Q13

num=int(input('enter the number ;\n'))

if (num//2) *2 == num:
    print("even number \n")
else:
    print('odd number \n')

#Q14
ch=input('enter the character :\n')
if ch >='A' and ch <= 'Z':
    print("uppercase letter\n")
elif ch >= 'a' and ch <= 'z':
    print("lowercase letter\n")
else:
    print('not a character\n')

#Q15
num1=int(input('enter the number :\n'))
num2=int(input('enter the second number:\n'))

if num1>num2:
    print("largest number:\n",num1)
else:
    print("largest number :\n",num2)

#Q16
salary=float(input("enter the salary:"))
gender=input("enter the gender\n")

if gender == 'f' or gender == 'F':
    bonus=salary *0.2
else:
    bonus=salary*0.1

    print("bonus:\n",bonus)

#17
num=int(input('enter the number:'))

if num % 2 ==0 or num % 3 ==0:
    print("the number is divisble by 2 and 3\n")
else:
    print("the number is not divisible by 2 and 3\n ")

#18
num=int(input('enter the number:'))
if num<0:
    num=-num
print("Absolute value:\n",num)

#19
per=float(input('enter percentage:\n'))
if per>=85:
    print("eligible for scholarship\n")
else:
    print('not eligible\n')

#20
amount=float(input('enter the total amount:\n'))

if amount>=5000:
    discount=amount*0.20
elif 5000<amount>=3000:
    discount=amount*0.10
else:
    discount=0

    print("discount:\n",discount)


