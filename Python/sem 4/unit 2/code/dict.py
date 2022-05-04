# d1={'a':100,'b':200,'c':300,'a':600}
# d2={'a':300,'b':200,'d':400}
# print(f"d1 dictionary: {d1}")
# print(f"d2 dictionary: {d2}")
# d1.update(d2)
#
# print(f"d1 updated dictionary: {d1}")


numbers_dict={'a':512,'b':900,'c':200,'d':710,'e':1231}

from heapq import nlargest
print(numbers_dict)

highest=nlargest(3,numbers_dict,key=numbers_dict.get)

print("dictonary with 3 highest values: ")
print("keys : values")

for val in highest:
    print(f"{val}    : {numbers_dict.get(val)}")
