# Arithmetic Calculations

def art_operations() :     # function
    a=int(input("enter first no.: "))
    b=int(input("enter second no.: "))
    print("addition is: ", a+b)
    print("subtraction is: ", a-b)
    print("multiplication is: ", a*b)
    print("division is: ", a/b)


# student marks 

def stu_marks():
    marks1=int(input("Enter marks of subject 1: "))
    marks2=int(input("Enter marks of subject 2: "))
    marks3=int(input("Enter marks of subject 3: "))
    marks4=int(input("Enter marks of subject 4: "))
    marks5=int(input("Enter marks of subject 5: "))

    total=marks1+marks2+marks3+marks4+marks5
    avg=total/5
    perc=(total/500)*100

    print("Total marks are: ",total)
    print("Average: ",avg)
    print("percentage: ",perc," %")

#conversion of cm to km and mt
def conversion():
    print("##############################")
    print("#  for kilometer type : km   #")
    print("#  for meter type : mt       #")
    print("#  for centimeter type : cm     #")
    print("##############################")


    lenght=float(input("enter the lenght: "))
    str1=input("what is the type of length you entered: ")

    if str1=="km":
        print(lenght,str1," = ",(lenght*100000)," cm")
        print(lenght,str1," = ",(lenght*1000)," mt")
    elif str1=="cm":
        print(lenght,str1," = ",(lenght/100)," mt")
        print(lenght,str1," = ",(lenght/100000)," km")
    elif str1=="mt":
        print(lenght,str1," = ",(lenght*100)," cm")
        print(lenght,str1," = ",(lenght/1000)," km")    
    else:
        print("invalid option")    

    

# calling the function

# art_operations()     
# stu_marks()
# conversion()