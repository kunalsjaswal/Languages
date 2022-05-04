num1=input("enter number 1:")
num2=input("enter number 2:")

try:
    print(num1,"+",num2,"=",int(num1)+int(num2))
except Exception as e:
    print(e)

    
print("this is important line should be executed")