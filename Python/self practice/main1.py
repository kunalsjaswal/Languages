def multi(x,y):
    print(f"{x} x {y} = {x*y}")

print("name of the file where the function multi is there is ",__name__)
if __name__ == '__main__':   # inside main function wont be displayed if we import this file in another file
    multi(3,7)
    print("this this main1 file")