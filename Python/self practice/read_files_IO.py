# file basics
"""
r - open file for reading #default
w - open  file for writing
x - creates file if not exists
a - append content to a file at the end
t - text mode(text file) #default
b - binary mode
+ - read and write
methods:-

"""

file=open("kunal.txt","r")
content=file.read()
print(content)
file.close()

print("\n###### line by line #####\n")

fil2=open("kunal.txt","rt")
for line in fil2:
    print(line,end="")
fil2.close()

#readline()
print("\n\n## read line ##\n")

file3=open("kunal.txt")
print(file3.readline())
print(file3.readline())
file3.seek(0)
print(file3.readlines())

file3.close()

# file writing   - it will clear last content and then write

file4=open("kunal2.txt","w")  # for append- file4=open("kunal2.txt","a")
file4.write("i am studing in CU")
file4.close()

# read and write both

file5=open("kunal2.txt","r+")
print(file5.read())
# file5.write("you can also use write function in r+ mode")
file5.close()