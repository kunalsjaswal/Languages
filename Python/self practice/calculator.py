num1=int(input("enter 1st number: "))
num2=int(input("enter 2nd number: "))
oper=input("enter the operation: ")
if oper=="+":
    print(num1+num2)
elif oper=="-":
    print(num1-num2)
elif oper=="*":
    print(num1*num2)
elif oper=="/":
    print(num1/num2)
else:
    print("sorry this operator is not in the calculator")