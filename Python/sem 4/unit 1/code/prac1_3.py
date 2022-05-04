# practical 1.3.1
pie=22/7

# # return type with simple function
# def area1():
#     r=int(input("enter the radius:"))
#     area=pie*r*r
#     return area
# result=area1()
# print("area of the circle is=", result)

#return type with parameterized function
# r=int(input("enter the radius:"))
# def area2(radius):
#     area=pie*r*r
#     return area
# result=area2(r)
# print("area of the circle is=", result)

# # return type with simple function
# def table1():
#     num=int(input("enter the number:"))
#     for i in range(1,11):
#         print(num,"*",i,"=",(num*i))
#     return
# table1()

# return type with parameterized function
num=int(input("enter the number:"))
def table2(number):
    for i in range(1, 11):
        print(num,"*",i,"=",(num*i))
    return
table2(num)

