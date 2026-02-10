fname,mname,lname=input("enter you name :\n").split()
courses={'aiml':'cs', 'som':'me','de':'ece'}

for key,value in courses.items():
    print(f"key: {key},value: {value}")

#for loop(square)
l=(1,2,3,4,5)
square_l=[num**2 for num in l]
print('square:\n',square_l) 





