# class
lang1 = ["python", "c++", "c", "Java", "html", "css","javascript","php","node.js","node express","mongod","mysql","dbms"]

class languages:
    def __init__(self,name,num):
        self.name=name;
        self.num=num
    def output(self):
        print(f"name: {self.name}\nTotal languages known: {self.num}")

obj1=languages("kunal singh jaswal",lang1)
obj1.output()