with open("kunal.txt","rt") as f:
    print(f.readlines())
    f.seek(0)
    print(f.readline())

