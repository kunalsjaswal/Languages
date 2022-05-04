# f.tell() tell the file pointer position
# f.seek() jumps the file pointer position to whatever index you want
f=open("kunal.txt")
print("file pointer at: ",f.tell())
print(f.readline())
print("file pointer at: ",f.tell())
print(f.readline())
print("file pointer at: ",f.tell())

f.seek(18)
print("file pointer at: ",f.tell())
print(f.readline())

f.close()
