class Veicles:
    def __init__(self, v_type, name, speed):
        self.__v_type = v_type,
        self.__name = name,
        self.__speed = speed

    def classify(self):
        if self.speed > 100:
            return "High-Speed Vehicle"
        return "Normal Vehicle"
    
    def show_info(self):
        categ = self.classify()
        print(f"Type: {self.v_type}, Name: {self.name},Speed: {self.speed}, Predicted: {categ}.")

class Car(Veicles):
    def __init__(self, v_type, name, speed):
        super().__init__(self, v_type, name, speed)
    
    def show_info(self):
        super().show_info(self)
class Bike(Veicles):
    def __init__(self, v_type, name, speed):
        super().__init__(self, v_type, name, speed)

    def show_info(self):
        super().show_info(self)

def main():
    n = int(input())
    veiclObjs = []
    for i in range(n): 
        data = list(input().split())
        if data[0] == "Car":
            obj = Car(data[0], data[1], data[2])
        elif data[0] == "Bike":
            obj = Bike(data[0], data[1], data[2])
        else:
            obj = Veicles(data[0], data[1], data[2])
        veiclObjs.append(obj)
    print(" --- Veicle Details")
    for v in veiclObjs:
        v.show_info()

main()