class student:    #class
    sem="2nd sem" #class variable
    pass

kunal=student()   # object of class
sameer=student()  # object of class

kunal.cls=810     #instant variables
kunal.sec="B"
sameer.cls=712
sameer.sec="B"
print(f"earlier they were in {student.sem}")

student.sem="4th sem"  #changing student class var value

print(kunal.cls,kunal.sec,kunal.sem)
print(sameer.cls,sameer.sec,sameer.sem)



