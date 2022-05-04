class university:
    u_name="Chandigarh university"
    def __init__(self,course="B-tech"):
        print(f"Course: {course}  (P)")

    def info(self):
        print(f"P - parent class\nC - child class")



class students(university):
    year=2022

    def __init__(self, name,stream):
        super().__init__()   # calling parent class constructor
        print(f"University name: {university.u_name}    (P)\nyear: {students.year}  (C)\nname: {name}    (C)\nstream name: {stream}   (C)\n")


child2=students("kunal singh jaswal","cse")
child2.info()