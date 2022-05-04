def function2(num):  #normal function
    if num==0:
        return print #print build-in class
    else:
        return sum

func_copy=function2(1)   #coping function2 in funct_copy
del function2
a=func_copy              # no effect on funct_copy function
print(a)

# decorator
import time
initial=time.time()

def dec1(funct):
    def funct_inside():
        print("(function starting to execute)",end="")
        for i in range(0,4):
            print(".",end="")
            time.sleep(1)
        funct()
        print("(function executed)")
    return funct_inside

@dec1 #1st way:- decorator
def funct_test():
    print("\nthis is kunal.. hiii")

@dec1
def funct_test2():
    print("\ni love computer science")

# funct_test=dec1(funct_test)  # 2nd way :- decorator
funct_test()
funct_test2()



