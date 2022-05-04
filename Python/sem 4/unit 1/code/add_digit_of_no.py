num=input("enter any number: ")
sum=0

for i in range(0,len(num)):
    sum+=int(num[i])

print("sum of the digits of your number is: ",sum)
