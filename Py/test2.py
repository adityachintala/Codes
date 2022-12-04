class Car:
    def _init_(self,model,color,name):
        self.model=model
        self.color=color
        self.name=name
    def display(self):
        return "This is a {} {} with {} MPG. ".format(self.color,self.model,self.name)
class ElectricCar(Car):
    def _init_(self,btype,model,color,name):
        Car._init_(self,model,color,name)
        self.btype=btype
    def display(self):
        print(Car.display(self)+"It has a {} battery.".format(self.btype))
n=input("Enter car name:")
c=input("Enter color of car:")
m=int(input("Enter mpg:"))
b=input("Enter battery type:")
ec=ElectricCar(b,n,c,m)
ec.display()