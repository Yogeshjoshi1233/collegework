#Q1
num=int(input("enter a number :\n"))
if num % 3 == 0 and num % 5 == 0:
    print("the number is divisible by 3 and 5\n")
else: 
    print("the number is not divisible by 3 and 5\n")

#Q2
num =int(input("enter a number : \n"))
if num % 5 == 0:
    print("the number is divisble by 5\n")
else:
    print("the number is not divisible by 5\n")

#Q3
num1=int(input("enter the number 1 :\n"))
num2=int(input("enter the number 2 :\n"))

if num1>num2 :
    print("the the greatest number is num1\n")
elif num2>num1:
    print("the greatest number is num2 \n")
else:
    print("number are equal\n")

#Q4
a=int(input("enter the value of a :\n"))
b=int(input("enter the vlaue of b :\n"))
c=int(input("enter the value of c :\n"))

if a>b>c:
    print("the greatest number is a\n",a)
elif b>a>c:
    print("the greatest number is b\n",b)
else: 
    print("the greatest number is c\n",c)

#Q5
a=int(input("enter the value of a :\n"))
b=int(input("enter the vlaue of b :\n"))
c=int(input("enter the value of c :\n"))

d=b**2 - 4*a*c
if d>0:
    print("the roots are real and distinct\n")
elif d==0:
    print("the roots are real and equal\n")
else :
    print('roots are imaginary\n')

#Q6

year=int(input("enter the year :\n"))

if (year % 400 == 0 ) or (year % 4 == 0 and year % 100 !=0 ):
    print("the year is a leap year \n")
else:
    print("the year is not a leap year \n")

#Q7
day=int(input("enter the day :\n"))
month=int(input("enter the month :\n"))
year=int(input('enter the year : \n'))

if day < 30:
    day+=1
else:
    day=1
    if month<12:
       month+=1
    else:
        month=1
        year += 1

print("next date :",day,"/",month,"/",year)


#Q8
name=input("enter name : \n")
roll=input("enter the roll number :\n")
sapid=input("enter SAP id : \n")

m1=int(input("enter mathetaics marks:\n"))
m2=int(input("enter physics marks :\n"))
m3=int(input("enter english marks : \n"))
m4=int(input("enter hindi marks :\n"))
m5=int(input("enter science marks :\n"))

total=m1+m2+m3+m4+m5

percentage=total/5
cgpa=percentage/10

if cgpa<=3.4:
    grade="F"
elif cgpa<=5.0:
    grade="C+"
elif cgpa<=7.0:
    grade="B+"
elif cgpa <=9.0:
    grade="A+"
else:
    grade="o (outstanding)"

print("name:\n",name)
print("roll no :\n",roll)
print("sapid:\n",sapid)
print("the CGPA :\n",cgpa)
print("Grade :\n",grade)

      
