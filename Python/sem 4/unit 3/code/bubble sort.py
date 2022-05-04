# bubble sort`
list1=[41,1,6,2,12,9,11]

print(f"initial list: {list1}")
temp = 0
for i in range(len(list1)-1,0,-1):
    for loop in range(i):
        if list1[loop]>=list1[loop+1]:
            temp=list1[loop+1]
            list1[loop+1]=list1[loop]
            list1[loop]=temp
print(f"sorted list: {list1}")

