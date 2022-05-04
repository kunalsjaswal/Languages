mystr="hello my name is kunal"
print(mystr)
print(len(mystr))   # length of the string
print(mystr[4])  # for only one alphabet
print(mystr[1:5])    # from 1 index to 5th index
print(mystr[0:50])   #all characters it will ignore from 22 to 50 index
print(mystr[0:10:2])  #to skip one  character
print(mystr[::-1])  #to reverse the string

# alpha numeric string :- in which spaces are not there
print(mystr.isalnum())
print(mystr.endswith("al"))   #to check string ends with the argument given
print(mystr.count("a"))    # to count the number of the string or the character in the string
print(mystr.capitalize())  # first letter of the string
print(mystr.find("is"))  # to find the location of the string
print(mystr.upper())
print(mystr.lower())        
print(mystr.replace("kunal","kunal singh jaswal"))   #replace the string

def funct(x,y):
    """this function adds two number"""
    return x+y
    print(x+y)

result=funct(2,5)
print(result)
print(funct.__doc__)