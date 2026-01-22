#question 2
age=30
print(age )
print(type(age))

# question 3
x="hello"
print(x)

#question 4
a=50
b=3.14
c="hello world i am doing python"
d='true' #boolean

print(a)
print(b)
print(c)
print(d)

#question 5
x=15
y=10

print("multiplication ", x*y)
print("addition:", x+y)
print("subtraction :", x-y)
print("division :", x / y )

#question 6

z=10
q=5
c=(z**2 + q**2) **0.5
print("hypotenuse:",c )

#question 7
a=1000
b=5
t=2

si=a*b*t/100

print("simple interest:",si)

#question 8
x=10
y=5

Area=1/2*x*y
print("area of the triangle  : ",Area)

#second method to calculate the area 

x=10
z=5
y=7

s=(x+y+z)/2
area = (s*(s-x)*(s-z)*(s-y))**0.5

print("area of the triangle :",area)

#question 9
seconds=5700
hours = seconds / 3600
min = (seconds % 3600)/60
remaining_seconds = seconds % 60

print("hours : ",hours)
print("minutes :",min)
print("remaming time left: ",remaining_seconds)

#question 10

a=10
b=8
a,b=b,a

print("a=",a)
print("b=",b)

#question 11

n=15
sum_n = n*(n+1)/2

print("sum of firest :",n,"natural numbers :",sum_n)