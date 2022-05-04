num=int(input("enter any number: "))
chk=0

for i in range(1,num+1):
    for j in range(2,i):
        if (i%j)==0:
            chk+=1
            break
        
    if(chk==0 and i!=1):
        print(i)
    chk=0        


   



