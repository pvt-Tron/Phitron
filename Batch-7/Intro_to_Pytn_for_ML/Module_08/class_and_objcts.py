'''
1. ---> BASE CLASS (= Parent Class) <--- #
(A). class
    def class class_name(inher.[optional]):
*inner variables,
*constructor __init__(self,*parameter(s))
    *attributes
    self.attr(= parameter[optional])
    ...
 --> self. ...
*methods (function-like)
    def meth_name(self, param):
        [body]
        return  
  - --------------------------- - 
(B). Instances: 
    obj = Class_Name(param) 
  - --------------------------- - 
2a. 
   #  - -  Parent CLasses  - -   #
   #  - -   Cild CLasses   - -   #
   
   #   - Single Inheritance -    #
   #  1 Parnet Class <--(Phone)  #
   #   child == derived class    #

  # -> super().__init__ ==> (Phone) 
    #  super links parent's attributes 

  # Parent method call (hybrid override)
  def... 
   super().method(...) 

2b.
  # # #  Multiple Inheritance  # # #
  #  more than 1 Parent Classes <- #
  # multiple-super.classes are 
  #  initialized by class_Name
  
3.
  # #     Polymorphsim           
  #  --> Override Parent Methods   
  #       Similar to Overloading   
4.
  # #     Encapsulation 
  # use --> Private Attributes
  # use 2 __underscore
  # private > self.__attrName = ...
  # methods on privates
5.
  # #     - ABSTRACTION -  
  # --> similar to Template/Interface
  # from abc import  ABC , abstractmethod
'''
'''
        CLASS & OBJECTS
           (phitron)

'''
from abc import  ABC , abstractmethod #*
# *(this->import is for Abstraction)

# ---> BASE CLASS (= Parent Class) <--- #
class Phone: # class
  category = "Electronics" # inner variable
  
  # constructor __init__() # instance
  # def __init__(self,model,battery,camera,battery_percentage=100):
  def __init__( # extended form allowed
      self, # parameters
      model,
      battery,
      camera,
      battery_percentage=100 # (= default value)         
  ):
    self.model = model # attribute
    self.battery = battery
    self.camera = camera
    self.battery_percentage = battery_percentage
  
  # methods
  def charge(self,hour):
    print(f"charge completed by {hour}")

  def capture(self,photo):
    if(self.battery_percentage)<=0:
      print("No charge")
    else:
      self.battery_percentage-=photo
      print(f"photo captured in {self.model}")

class Cooling_Mechanism:
  def __init__(self,cooling_method):
    self.cooling_method= cooling_method
  # methods
  def cooling_on(self):
    print(f"the system is being cool by {self.cooling_method}")

# - -  Cild CLasses  - - #
# - Single Inheritance - #
# 1 Parnet Class <-------
class SmartPhone(Phone): # child / derived class
  
  def __init__(self,model , battery , camera,processor): 
    super().__init__(model,battery,camera)
    self.processor = processor
# -> super().__init__ ==>(Phone) 
#  super links parent's attributes 
   
   ## modified method (hybrid override)
  def charge(self,hour):
    print("fast charging in process")
    super().charge(hour) 
#   ^^   Parent method call
     
# # # Multiple Inheritance # # #
# more than 1 Parent Classes <-
class SmartPhone_CoolingMode(SmartPhone,Cooling_Mechanism):
  def __init__(self,model , battery , camera,processor,cooling_method):
    SmartPhone.__init__(self,model,battery,camera,processor)
    Cooling_Mechanism.__init__(self,cooling_method)
    # multiplesuper.classes are 
    # initialized by class_Name

# # Polymorphsim # #
# --> Override Parent Methods 
# Similar to Overloading
class Camera:
  def __init__(self , name):
    self.name = name
 # method
  def capture(self):
    print("a photo is captured")

class Smart_Phone(Camera):
  def __init__(self,name,resolution):
    super().__init__(name)
    self.resolution = resolution
 # method overriding <---------
  def capture(self):
    print("Photo is captured by a Phone")

class DSLR(Camera):
  def __init__(self,name,resolution):
    super().__init__(name) # <----- super().
    self.resolution = resolution

  def capture(self):
    print("Photo is captured  by DSLR")

class Drone(Camera):
  def __init__(self,name,resolution):
    super().__init__(name)
    self.resolution = resolution

  def capture(self):
    print("Photo is captured by Drone")

# # Encapsulation # #
# use --> Private Attributes
# use 2 __underscore
class Mobile: 
  def __init__(self,name,model,imei):
    # private > self.__attrName = ...
    self.__name = name
    self.__model = model
    self.__imei = imei

  # methods on privates 
  def imei_getter(self):
    return self.__imei
  def model_getter(self):
    return self.__model
  def name_getter(self):
    return self.__name
  def name_setter(self,name):
    self.__name = name
  # standard method(s)
  def charge(self):
    print("phone is charging")

#  - ABSTRACTION -  #  
# --> similar to Template/Interface
# from abc import  ABC , abstractmethod
class Telephone(ABC):
  @abstractmethod       # @ <---
  def make_call(self):
    pass

class Sphone(Telephone):
  def make_call(self):
    print("Making a call using SPhone")

class Iphone(Telephone):
   def make_call(self):
    print("Making a call using IPhone")


# # #  MAIN  # # # 
def main():
    # # creating object # #
  apple = Phone("Iphone17",3000,40)
  blueberry = Phone("B-17",4000,30)
  motorola = Phone("M-17",3500,35)
  apple.capture(10)
  print(motorola.battery_percentage)
  # > photo captured in Iphone17
  # > 100

  #  - Single Inher. - #
  pro = SmartPhone("X",5000,100,"SnapDragon")
  print(pro.model)
  pro.charge(1) 
  # > X
  # > fast charging in process
  # > charge completed by 1

  # - - Multi. Inher. - - #
  pro_cooling = SmartPhone_CoolingMode("Y",5000,100,"SD","Nitrogen")
  print(pro_cooling.processor) # SmartPhone class theke
  print(pro_cooling.battery) # Phone class theke
  print(pro_cooling.cooling_method) # Cooling_Mechanism class theke
  print(pro_cooling.cooling_on()) # Cooling_Mechanism class er method
  print(pro_cooling.charge(1)) # SmartPhone er modified charge jeta Phone class theke inherited
  # > SD
  # > 5000
  # > Nitrogen
  # > the system is being cool by Nitrogen
  # > None
  # > fast charging in process
  # > charge completed by 1
  # > None

 # Polimor.
  phone = Smart_Phone("Phone",30)
  dslr = DSLR ("DSLR",200) 
  drone = Drone("Drone",150)
  phone.capture()
  dslr.capture()
  drone.capture()
  # > Photo is captured by a Phone
  # > Photo is captured  by DSLR
  # >  Photo is captured by Drone

 # Encaps.
  # outside world ( user )
   # registration
  iphone = Mobile("Phone","17","1xkaf1")
  print(iphone.name_getter())
  iphone.name_setter("Phitron")
  print(iphone.name_getter())
  # > Phone
  # > Phitron

 # Abstr.
  ip = Iphone()
  ip.make_call()   
  # > Making a call using IPhone
main()