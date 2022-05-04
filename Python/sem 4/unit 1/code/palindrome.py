str1=input("enter the text: ")
str2=str1[::-1]
n=str1.__len__()
n2=int(n/2)
last=n-1
count=0
#  way 1

if(str1==str2):
    print("text is palindrome")
else:
    print("text is not palindrome")


#  way 2

# if n%2==0:
#     for i in range(0,n2):
#         if str1[i]!=str1[last]:
#             count+=1
#         else:
#             count=count
#
#         last-=1
#
#
# else:
#     for i in range(0,(n2+1)):
#         if str1[i]!=str1[last]:
#             count+=1
#         else:
#             count=count
#
#         last-=1
#
# if count==0:
#     print("text is palindrome")
# else:
#     print("text is not palindrome")