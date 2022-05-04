# recursion approch :- calling the function again and again till the specific result isn't obtained
# e.g.,
def recursion_fnx():
    print("(a)recursion.\n(b)exit.")
    option=input("select option: ")
    if option=="a":
        print("calling the function again")
        recursion_fnx()
    elif option=="b":
        print("Exits.")
        exit(1)
    else:
        print("invalid option. ")
        recursion_fnx()

# recursion_fnx()

# Iterative approch :- using loops running until the required output


def iterative_fnx():
    i=0
    print("iterative approch")
    while True:
        print("iterative",i)
        i+=1
        if i==10:
            exit(1)

# iterative_fnx()

# finding factorial using iterative and recursion

def fact_iter():
    fact=1
    num=int(input("enter the number:"))
    for z in range(1,num+1):
        fact=fact*z
    print(num,"! =",fact)

# fact_iter()

def fact_recurs(num):
    if num==0:
        return 1
    else:
        return num * fact_recurs(num-1)

result=fact_recurs(5)
print(result)