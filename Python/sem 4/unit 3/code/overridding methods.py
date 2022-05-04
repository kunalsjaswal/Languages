class A:
    def fnx1(self):
        print("this is parent class")
class B(A):
    def fnx1(self):
        print("this is child class method")

obj1=B()
obj1.fnx1()