import time

initial=time.time()
print(initial)
k=0
while k<50:
    print("hello kunal")
    k+=1
time.sleep(2)

initial2=time.time()
print("time after while loop ",initial2-initial," seconds")


for i in range(50):
    print("how are you")
print("time after for loop loop ",time.time()-initial2," seconds")

localtime=time.asctime(time.localtime()) #asctime() convert tuple into represantaion form. as local time result tuples
print(localtime)