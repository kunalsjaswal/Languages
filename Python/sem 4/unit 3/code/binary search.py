list1=[4,7,12,3,9,2,8,1,22]
num=int(input("enter number: "))
temp=list1
list1.sort()   #binary search is always implemented on sortde list

def bn_search(lists,elem):
    low=0
    high=len(lists)-1
    mid=0
    while low<=high:
        mid=(low+high)//2
        if elem>lists[mid]:
            low=mid+1
        elif elem<lists[mid]:
            high=mid-1
        else:
            return mid
    return -1

result=bn_search(list1,num)
if result==-1:
    print(f"your number: {num}\nresult: not present\nlist: {list1}")
else:
    print(f"your number: {num}\nresult: present\nindex: {result} \nlist: {list1}")





