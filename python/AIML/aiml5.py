def sum_num(*args):
    sum=0
    for num in args:
        sum+=num
        print(f"sum of all the numbers :{sum}\n")

sum_num(1,2)
sum_num(1,2,3,4)