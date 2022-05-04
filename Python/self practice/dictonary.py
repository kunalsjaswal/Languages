# dictornary is key value pair

d1={"name":"kunal",
    "surname":"singh jaswal",
    "age":21,
    "diet":{"breakfast":"oats","lunch":"Rajma","dinner":"rice"}}

d1["state"]="himachal"   #inserting string
d1[420]="hello"          #inserting integer
print(d1)                #printing whole dictonary
print(d1["age"])
print(d1["diet"]["breakfast"])   # dictionary inside dictionary

# to make a copy of any thing use x.copy()
# d2=d1  now here if we will del from d1 then it will automatically del from d2 because d2 is a pointer pointing toward d1
d2=d1.copy()
del d1[420]              #deleting particular item
print(d1)
print(d2)

d2.update({"hobbie":"guitar"})         #another way to add
print(d2)

print(d2.keys())
print(d2.values())
print(d2.items())

