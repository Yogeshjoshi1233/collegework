#experiment 5 ,list, tuple, dictionary
#Q1-1.	Scan n values in range 0-3 and print the number of times each value has occurred.
n=int(input('enter the number of values :'))
values=[]
for i in range(n):
    values.append(int(input()))

for i in range(4):
    print(i,"occured",values.count(i),"times")


#Q2-1.	Scan n values in range 0-3 and print the number of times each value has occurred.
n=int(input('enter the number in values :'))
values=[]
for i in range(n):
    values.append(int(input()))

t=tuple(values)
average=sum(t)/len(t)
print("tuple",t)
print("average",average)

#Q3-3.	WAP to input a list of scores for N students in a list data type. Find the score of the runner-up and print the output.
n = int(input("Enter number of students: "))

scores = list(map(int, input("Enter scores: ").split()))

unique_scores = list(set(scores))  # Remove duplicates
unique_scores.remove(max(unique_scores))  # Remove highest

print("Runner-up score:", max(unique_scores))

#Q4-4.	Create a dictionary of n persons where key is name and value is city. 
n = int(input("Enter number of persons: "))

people = {}

for i in range(n):
    name = input("Enter name: ")
    city = input("Enter city: ")
    people[name] = city

# a) Display all names
print("Names:", people.keys())

# b) Display all cities
print("Cities:", people.values())

# c) Display name and city
for name, city in people.items():
    print(name, "->", city)

# d) Count students per city
city_count = {}

for city in people.values():
    if city in city_count:
        city_count[city] += 1
    else:
        city_count[city] = 1

print("Students per city:", city_count)

#Q5-5.	Store details of n movies in a dictionary by taking input from the user. Each movie must store details like name,  year, director name, production cost, collection made (earning) & perform the following :-
movies = {}

n = int(input("Enter number of movies: "))

for i in range(n):
    name = input("Movie name: ")
    year = int(input("Year: "))
    director = input("Director: ")
    cost = float(input("Production cost: "))
    collection = float(input("Collection: "))

    movies[name] = {
        "year": year,
        "director": director,
        "cost": cost,
        "collection": collection
    }

# a) Print all movie details
for name, details in movies.items():
    print(name, details)

# b) Movies before 2015
for name in movies:
    if movies[name]["year"] < 2015:
        print("Before 2015:", name)

# c) Movies with profit
for name in movies:
    if movies[name]["collection"] > movies[name]["cost"]:
        print("Profitable:", name)

# d) Movies by particular director
d = input("Enter director name: ")

for name in movies:
    if movies[name]["director"] == d:
        print("Directed by", d, ":", name)

#Q6-Create a contact book where users can store, search, update, and delete contacts. Use dictionary for storing contacts.
contacts = {}

while True:
    print("1.Add 2.Search 3.Update 4.Delete 5.Exit")
    choice = input("Enter choice: ")

    if choice == "1":
        name = input("Name: ")
        phone = input("Phone: ")
        contacts[name] = phone

    elif choice == "2":
        name = input("Enter name to search: ")
        print(contacts.get(name, "Not found"))

    elif choice == "3":
        name = input("Name to update: ")
        if name in contacts:
            contacts[name] = input("New phone: ")

    elif choice == "4":
        name = input("Name to delete: ")
        contacts.pop(name, None)

    else:
        break

#Q7-7.	Create a Todo list Manager where users can add, view, and remove tasks. Use List for storing tasks.
tasks = []

while True:
    print("1.Add 2.View 3.Remove 4.Exit")
    choice = input("Choice: ")

    if choice == "1":
        task = input("Enter task: ")
        tasks.append(task)

    elif choice == "2":
        for t in tasks:
            print(t)

    elif choice == "3":
        task = input("Task to remove: ")
        if task in tasks:
            tasks.remove(task)

    else:
        break
