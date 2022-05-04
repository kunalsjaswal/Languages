num=int(input("enter any number: "))
for i in range(0,num):
    for j in range(num-i,0,-1):
        print(j,end=" ")
    print()    