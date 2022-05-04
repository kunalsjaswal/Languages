#lists
friend=["rohan","akshit","sameer","sourav","abhinandan"]
age=[20,31,11,50,29]

print(friend)
print(friend[2])
print(age)
print(age[2])
age.sort()          #changes the origial list
print(age)
age.reverse()        # age[::-1] this also reverse the list
print(age)          # in decreasing order

#slicing of the list

print(age[:3])       # it doesn't change the original list
print(age[::3])     # skip 2 items

# appending the list
age.append(13)  # it append the item at the end
print(age)

age.insert(1,44)      # insert adds at the given index
print(age)

age.pop()     #deletes last number
print(age)


# mutable  - can change  (list can be changed)
# immutable  - cannot change (tuples cannot be changed)

# tuples ()

numbers=(1,2,3,4,5,6,7,8,9)
print(numbers)
# numbers[2]=1   error


#SWAPPING TWO NUMBERS
a=1
b=5
a,b=b,a
print(a,b)