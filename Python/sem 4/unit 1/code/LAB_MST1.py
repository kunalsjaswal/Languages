# Q1
# def fibboo():
#     num=int(input("enter the number: "))
#     first=0
#     second=1
#     for i in range(num):
#         print(first*"$",first)
#         third=first+second
#         first=second
#         second=third
#
# fibboo()

# def sum_of_digits():
#     num=input("enter a number: ")
#     sum = 0
#     for i in range(len(num)):
#         sum+=int(num[i])
#     print("input: ",num)
#     print("sum of the digits: ",sum)
#
# sum_of_digits()

# Q2

def cloth_showroom():
    cost=0
    total_cost=int(input("enter your total cost: "))
    if(total_cost<=2000):
        cost=total_cost-total_cost*0.05

    elif(total_cost>2000 and total_cost<=5000):
        cost=total_cost-total_cost*0.25

    elif(total_cost>5000 and total_cost <=10000):
        cost=total_cost-total_cost*0.35

    elif(total_cost>10000):
        cost=total_cost-total_cost*0.5

    else:
        print("error :-(")

    return cost


print("total cost to be paid: ",cloth_showroom())
