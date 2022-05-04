
# 1. cube coloring
"""
testcases=int(input())
total_cost=[]
for i in range(testcases):
    side_cost=list(map(int,input().split()))
    if side_cost[0]%2==0:
        ltr=side_cost[0]//2
    else:
        ltr=(side_cost[0]//2)+1
    sum=0
    for i in range(1,len(side_cost)):
        sum+=side_cost[i]
    total_cost.append(sum*ltr)

for i in total_cost:
    print(i)
"""

# pairwise different

sample=int(input())
intsample=[]
strsample=[]

result=[]

for i in range(sample):
    num=(input())
    intsample.append(int(num))
    strsample.append(num)


print(strsample)
for j in range(len(strsample)):
    tmpset = {0}
    for i in j:
        tmpset.update(i)

    if len(tmpset)!=len(j) or tmpset!=j:
        intsample[j]+=1




