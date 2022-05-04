str1=input("enter string 1: ")
str2=input("enter string 2: ")

common=set([])
uncommon=set([])
for i in range(len(str1)):
    counter=0
    for j in range(len(str2)):
        if(str1[i]==str2[j]):
            counter+=1

    if(counter==0):
        common.add(str1[i])
    else:
        uncommon.add(str1[i])

for i in range(len(str1)):
    counter=0
    for j in range(len(str2)):
        if(str1[i]==str2[j]):
            counter+=1

    if(counter==0):
        common.add(str1[i])
    else:
        uncommon.add(str1[i])

for i in range(len(str2)):
    counter=0
    for j in range(len(str1)):
        if(str2[i]==str1[j]):
            counter+=1

    if(counter==0):
        common.add(str2[i])
    else:
        uncommon.add(str2[i])

print("uncommon: ",common)
print("common: ",uncommon)