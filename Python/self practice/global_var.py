l=20
def glob_var():
    print(l)

def localvars():
    l=15
    print(l) #global l

def change_global():
    global l
    l=18
    print(l)

glob_var()
localvars()
print(l)
change_global()
print(l)