# f strings
import math
str1="kunal"
str2="singh jaswal"
a="my name is %s %s"%(str1,str2)     # this is messing
print(a)

b=f"my name is {str1} {str2} ,cos 0 deg= {math.cos(0)}"  # f string. use f at start and write var name in the brackets
print(b)