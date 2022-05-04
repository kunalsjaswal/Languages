# use input() to take inpur from the user 
# input() converts into string e.g input()=10 == '10'
#  use type casting int(input())

a=int(input("enter first no.: "))
b=int(input("enter second no.: "))


def art_operations(x,y) :     # function
    print("addition is: ", a+b)
    print("subtraction is: ", a-b)
    print("multiplication is: ", a*b)
    print("division is: ", a/b)

art_operations(a, b)            #calling function