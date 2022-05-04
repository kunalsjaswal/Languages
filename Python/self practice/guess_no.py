
for i in range(6,0,-1):
    print("you have",i,"chances")
    num = int(input("guess my number(hint:in-between 1 and 20):"))
    if num==7:
        print("congratss!! you guessed it")
        count=0
        break
    elif num>7:
        print("try again!! with smaller number")
        count=1
        continue
    elif num<7:
        print("try again!! with bigger number")
        count=1
        continue

if count==1:
    print("you lost:-(")

