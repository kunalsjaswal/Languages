"""
Q1 Write a Python class named Student with two attributes student_id,
student_name. Add a new attribute student_class and display the entire attribute
and their values of the said class. Now remove the student_name attribute and display
the entire attribute with values

Q2 Write a Python class to find a pair of elements (indices of the two numbers) from a
given array whose sum equals a specific target number.

Q3 Write a Python class named Rectangle constructed by a length and width and a
method which will compute the area of a rectangle

Q4 Write a Python class named Circle constructed by a radius and two methods which
will compute the area and the perimeter of a circle

Q5 Write a Python program to crate two empty classes, Student and Marks.
Now create some instances and check whether they are instances of the said classes or not.
Also, check whether the said classes are subclasses of the built-in object class or not


class students:
    student_id="20BCS9585"
    student_name="kunal"
    student_class="810/B"

    def show1(self):
        print(f"student id: {self.student_id} \nstudent name: {self.student_name}\n")

    def show2(self):
        print(f"student id: {self.student_id} \nstudent name: {self.student_name}\nstudent class: {self.student_class}\n")

    def show3(self):
        print(f"student id: {self.student_id} \nstudent name: {self.student_class}\n")

obj1=students()
obj1.show1()
obj1.show2()
obj1.show3()

class findnum:

    def __init__(self,array,num):
        for i in range(len(array)):
            sum = 0
            for j in range(i+1,len(array)):
                sum = array[i]+array[j]
                if sum==num:
                    indices.append(i)
                    indices.append(j)
                    sum=0
                else:
                    sum=0

arr=[1,2,3,4,5,6,7,8,9]
indices=[]
num=int(input("enter the number: "))
findnum(arr,num)
counter=0
print("indices and numbers in the array whose sum is",num,"are: ")

for i in range(len(indices)):
    print(f"indices = {indices[i]} value = {arr[indices[i]]} ,",end=" ")
    if i%2!=0:
        print()


class rectangle:
    def area_of_rect(self,length,breadth):
        area=length*breadth
        print(f"length ={length} , breadth ={breadth}\narea ={area}")
obj1=rectangle()
obj1.area_of_rect(5,12)



class circle:

    def area(self,radius):
        print(f"radius = {radius}\narea = {3.14*(radius)**2} ")

    def perimeter(self,radius):
        print(f"parimeter = {2*3.14*radius}")
obj1=circle()
radius=int(input("enter radius: "))
obj1.area(radius)
obj1.perimeter(radius)
"""

class student:
    str1="this is student class"
    def fn1(self):
        print(self.str1)
class marks:
    str1 = "this is marks class"
    def fn2(self):
        print(self.str1)

st1=student()
st2=student()
mrk1=marks()
mrk2=marks()
print(st1,"\n",st2,"\n",mrk1,"\n",mrk2)

