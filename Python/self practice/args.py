#normal funciton with arguments
def fnx1(a,b,c):
    print(a,b,c)
fnx1("kunal","sourav","rohan")

# *args function
normal="this is normal argument"
friends=["kunal","sourav","rohan","sameer"]
fav_food={"kunal":"pizza","rohan":"kulcha","akshit":"pasta"}

def n_items(normal,*args,**kwargs):       # normal -> args -> kwargs (any name for the argument)
    print(normal)
    for i in args:
        print(i,end=" ")
    print("\n")
    for i,j in kwargs.items():
        print(f"{i} loves to eat {j}")

n_items(normal,*friends,**fav_food)