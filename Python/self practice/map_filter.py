# map function use to apply change to exery item in the list or object and return object

list1=["1","2","3","4","5"]
print("string values: ",list1)

list1=list(map(int,list1))
print("integer values",list1)

# lambda x:x*x == def sq: return x*x

square=list(map(lambda x:x*x,list1))
print("printing square of numbers in list1",square)


def sq(x):
    return x*x
def cube(x):
    return x*x*x

funct=[sq,cube]  #list of functions

for i in range(1,10):
    val=list(map(lambda x:x(i),funct))
    print(val)

# filter function filter the list with given condition

list2=[1,2,3,4,5,6,7,8,9,10]

even_no=list(filter(lambda x:x%2==0,list2))
odd_no=list(filter(lambda x:x%2!=0,list2))
print(even_no)
print(odd_no)