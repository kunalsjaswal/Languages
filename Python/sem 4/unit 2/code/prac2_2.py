# lists and tuples


list1=[1,2,"kunal",3.5,'a']
list2=[7,3,"sameer"]
"""
print(f"list1 = {list1}")
print(f"list1[2]= {list1[2]}")
list1[2]="kunal singh jaswal"
print(list1)
del list1[1]
print(list1)
print(list1+list2)
print(2 in list1)
j=0
for i in list1:
    print(f"list[{j}] = {i}")
    j+=1
"""
print(f"list1 = {list1}")
print(f"list2 = {list2}")
# indexing , slicing are same as strings

#built-in list functions

print(len(list1))
atuple=(1,2,3,4)
print(type(atuple))
alist=list(atuple)
print(type(alist))

list1.append(4)
list1.append(1)
print(list1)
print(list1.count(1))
list1.extend(list2)
print(list1)
list1.insert(3,100)
print(list1)
print(list1.pop())  #removes and show last element in the list
print(list1)
list2.reverse()
print(list2)
list3=[2,51,5,2,3,51,21,4,12,2]
list3.sort()
print(list3)