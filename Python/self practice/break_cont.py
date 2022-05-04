i=0
while True:
    i = i + 1
    if i==5:
        continue
    if i==10:
        break
    print(i,end="  ")

while 1:
    age=int(input("\nenter your age.. speak the truth: "))
    if age==21:
        print("you are a genuine man")
        break
    else:
        print("liar.. try again")
        continue


