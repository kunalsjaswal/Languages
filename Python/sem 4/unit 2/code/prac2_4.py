# 1 Write a Python program to replace last value of tuples in a list
"""
list1=[(1,2,3,4,5)]
print(f"list: {list1}")
list1[0]=list(list1[0])
list1[0][len(list1[0])-1]=10
list1[0]=tuple(list1[0])
print(f"list(after deleting): {list1}")
"""

# 2. Write a Python program to remove an empty tuple(s) from a list of tuples
"""
list2=[(),(1,2),(),(24,5,1)]
list3=[]
print("list: ",list2)

for i in list2:
    if(len(i)!=0):
        list3.append(i)

del list2
print("list after deleting empty tuples",list3)
"""

# 3. Write a Python program calculate the product, multiplying all the numbers of a given tuple.
"""
tuple1=(2,1,6,3,8,12,4,10)
print(f"tuple: {tuple1}")
sum,product=0,1
for i in tuple1:
    sum+=i
    product*=i
print(f"sum: {sum} \nproduct: {product}")
"""
#4. Write a Python program to convert a tuple of string values to a tuple of integer values
"""
str_tuple=("2","72","11","26","54")
print(str_tuple)
print(type(str_tuple[1]))
str_tuple=list(str_tuple)
for i in range(len(str_tuple)):
    str_tuple[i]=int(str_tuple[i])
str_tuple=tuple(str_tuple)
print(str_tuple)
print(type(str_tuple[1]))
"""
# 5. Write a Python program to check if a specified element presents in a tuple of tuples

tuple1=((1,2,3,4),(1,4,9,16),(1,8,27,64))
num=int(input("enter a number to check whether it is inside tuple of tuple: "))
counter=0
for val in tuple1:
    if num in val:
        counter+=1

if counter>=1:
    print(num, " exist inside tuple of tuple")
else:
    print(num, " doesn't exist inside tuple of tuple")