# list1=[(2,6,1),(2,5,8),(4,2,3),(6,5,2,9,7),(1,2)]
#
# def last(n):
#     return n[-1]
#
# def sort(tuples):
#     return sorted(tuples, key=last)
#
# print("unsorted: ",list1)
# print("Sorted:",sort(list1))

countries= ["India","USA","Russia","Nepal","Japan","China","Switzerland"]
for i in range(len(countries)):
    print(f"index {i}: {countries[i]}")
def del_elements(list):
    del list[0]
    del list[3]
    del list[3]

del_elements(countries)
print("list after deleting oth , 4th and 5th element: ",countries )

