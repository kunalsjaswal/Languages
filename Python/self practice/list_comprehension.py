# list comprehension
"""
ls=[]
for i in range(100):
    if i%5==0:
        ls.append(i)
print(ls)
"""

# doing above in one line

ls=[i for i in range(100) if i%5==0]
print(ls)

# for dictionary

dict1={ i:f"item{i}" for i in range(10)}
# to reverse key and value
print(dict1)

dict1={value:key for key,value in dict1.items()}
print(dict1)

#set

set1={names for names in ["kunal","rohan","sammer"]}
print(set1)