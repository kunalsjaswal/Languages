#merge sort
# divide and conqur rule
"""
steps
1. check if unsorted list is 1 or 0.. if true return unsorted list
2. find the middle element and divide it into left and right sublists
3. chk left half and right half
"""

list1=[1,7,4,9,10,2,3]
#define unsorted
def sublist(unsorted_list):
    #checking if the string contain 0 or 1 elements
    if len(unsorted_list)<=1:
        return unsorted_list

    #finding middle element

    m=len(unsorted_list)//2

    left_sub=unsorted_list[:m]
    right_sub=unsorted_list[m:]

    left_sub=sublist(left_sub)
    right_sub=sublist(right_sub)

    return sorted_ls(left_sub,right_sub)


# define sorted


def sorted_ls(left,right):
    result=[]
    while len(left)!=0 and len(right)!=0:
        if left[0]<right[0]:
            result.append(left[0])
            left.remove(left[0])
        else:
            result.append(right[0])
            right.remove(right[0])

    if len(left)==0:
        result=result+right
    else:
        result=result+left

    return result


print(f"unsorted list: {list1}\nSorted list: {sublist(list1)}")

