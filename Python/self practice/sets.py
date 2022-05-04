# same set as in 11th 12th
# defining set using list. this is different from list because set contain  unique values only but list can contain duplicate values
s=set([1,2,3,4,1])   # only one 1 in the set
print(s)
print(type(s))

s2=set()   #empty set
s2.add(1)
s2.add(11)
s2.add(12)
s2.remove(12)
print(s2)

s_union=s.union(s2)  # union of two sets
s_inter=s.intersection(s2)  # intersection
print(s_union)
print(s_inter)
print(s.isdisjoint(s2))      # to check disjoint set