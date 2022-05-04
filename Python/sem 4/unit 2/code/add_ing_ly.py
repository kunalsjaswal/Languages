user_str=input("enter any string: ")
ln=len(user_str)


if(len(user_str)>=3):
    if(user_str[ln-3:ln]=="ing"):
        str1 = user_str[:ln - 3]
        str1 = str1 + "ly"
        print(str1)

    elif(user_str[ln-3:ln]!="ing"):
        str1 = user_str
        str1=str1+"ing"
        print(str1)

else:
    print("error, your string is less than 3 lettes.")

