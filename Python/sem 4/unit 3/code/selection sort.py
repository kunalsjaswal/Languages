list1=[4,7,1,2,9,12,54]
print(f"unsorted list: {list1}")

for index in range(len(list1)-1,0,-1):
    pos=0
    for i in range(1,index+1):
        if list1[i]>list1[pos]:
            pos=i


    list1[pos],list1[index]=list1[index], list1[pos]

print(f"sorted list: {list1}")


