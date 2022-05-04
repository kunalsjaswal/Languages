list1=[1,2,5,6,3,8]

if 5 in list1:
    print("yes 5 is in the list")
else:
    print("no it is not in the list")

if 10 not in list1:
    print("10 is not in the list")

# looping

names=["kunal","sameer","akshit","sourav","abhinandan","rohan"]
for item in names:
    print(item)

list2=[["k",1],["j",2]]
for i in list2:
    for j in i:
        print(j)

for k , l in list2:
    print(k,l)

dict=dict(list2)
for z,x in dict.items():   # for dictionary use .items()
    print(z,x)
#
# asd=input("enter:")
# print(asd.isnumeric())  to check whether the string is numeric or not
i=0
while i<10:
    print(i)
    i=i+1