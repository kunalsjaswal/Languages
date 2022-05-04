# stone paper scissors game

import random
choice=["stone","paper","scissors"]
print("Lets play stone paper scissors:-)")

while True:
    print("1. choose\n2. exit")
    option=int(input("select: "))
    if option==1:
        user=input("stone paper scissors?: ")
        ai=random.choice(choice)
        choices = f"Your choice: {user} \nComputer choice: {ai}"
        print(choices)
        if(user==ai):
            print("no one wins:-| try again")
        else:
            if(user=="paper" and ai=="stone"):
                print("you won!!:-)")
            elif(user=="stone" and ai=="paper"):
                print("you lost:-(")
            elif(user=="stone" and ai=="scissors"):
                print("you won:-)")
            elif(user=="scissors" and ai=="stone"):
                print("you lost:-(")
            elif(user=="paper" and ai=="scissors"):
                print("you lost:-(")
            elif(user=="scissors" and ai=="paper"):
                print("you won:-)")
            else:
                print("invalid choice")
    elif(option==2):
        exit(1)
    else:
        print("invalid choice")
