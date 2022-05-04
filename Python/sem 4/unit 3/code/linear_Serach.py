# linear search

list1=[3,12,5,4,8,7,34,11,9]
val=int(input("enter the number to find: "))
counter=0
for i in list1:
    if val==i:
        print(f"your number {val} is there in the list.\nour list is: {list1}")
        exit(0)

    counter+=1
if counter==len(list1):
    print(f"not in the list.\nour list is: {list1} ")