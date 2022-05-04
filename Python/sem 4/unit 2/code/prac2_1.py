str="kunal "
str2='CHANDIGARH UNIVERSITY'
print(f"initial strings = {str}")

"""
for i in range(len(str)):
    print(f"str[{i}] = {str[i]}")
print(f"str[:] = {str[:]}")
print(f"str[0:5] = {str[0:5]}")
print(f"str[2:2] = {str[2:4]}")
print(f"str[:] = {str[::-1]}")

str[2]='s'
print(str)
str="kunal singh jaswal"
print(f"after changing = {str}")
"""

#operators
"""
print(str+str2)
print(str*5)
print(str2[4])
print(str2[2:8])
print("u" in str)
print("k" not in str)
print(r"\n is for next line, \t is for space")
print("the string is %s"%(str))
"""

#quotes inside quote
"""
print('they said,"Whats\'s there"')  #using backslash
print('''They said,"What's there?"''')  #using triple single quote
print(str[::2])   # skip 1 letter
"""

#membership operators
"""
s1="christiano ronaldo"
s2="messi"
s3="christiano"
s4="ssi"
print(s2 in s1)
print(s3 in s1)
print(s4 in s2)
"""
"""
#str functions
s1="kunalsinghjaswal"
s2="kunal123"
word="a"
print(s1.capitalize())
print(s1.count(word))  #counts no of word in your string

print(s1.find(word))  #find the word

print(s1.isalnum())  #it tells whether the string is alfanumeric= alfbet+numeric
print(s2.isalnum())
print(s2.isalpha())
print(s1.isalpha())  #string has all alfabets or not
print(s1.isdigit()) # string is all digit or not
print(s2.isdigit())
print(s1.islower())
print(s1.isupper())
print(len(s1))
print(s1.swapcase())

print(s2.rstrip("3"))  #it strips the word given in the argumnet left or right of the string
"""