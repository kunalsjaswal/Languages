num=input("enter a number: ")
length=len(num)
sum=0

for i in range(0,length):
    sum+=int(num[i])**3

num=int(num)
if sum==num:
    print("Armstrong number")
else:
    print("Not an Armstrong number")



