list1=["kunal","kajal","rohan","payal"]
#enumerate keeps track of the index at which the loop is
for index,item in enumerate(list1):
    print(index,item)
for index, item in enumerate(list1):
    if index % 2 == 1:
        print(f"{item} is a girl")
    else:
        print(f"{item} is a boy")

