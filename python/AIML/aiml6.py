def student_info(**kwargs):
    for key,value in kwargs.items():
        print(f"key: {key},value : {value}")

student_info(fname='abc',mname='def',sapid=12345)
student_info(fname='abc',mname='def',lname='xyz',sapid='12345',program='btech')
