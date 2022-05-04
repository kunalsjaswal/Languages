# 0 1 1 2 3 5 8

def iterative_fab_series():
    num=int(input("enter the number:"))
    first=0
    second=1

    for i in range(num):


        third=first+second
        print(first,end=" ")
        first=second
        second=third

iterative_fab_series()

# def rec_fab_series(n):
#     if  n==1:
#         print(n)
#         return 1
#     elif n==2:
#         print(n)
#         return 2
#     else:
#         print(n)
#         return rec_fab_series(n-1)+rec_fab_series(n-2)
#
# rec_fab_series(5)
