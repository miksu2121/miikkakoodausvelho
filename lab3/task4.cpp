#include <iostream>
#include <string> 

class vehicle {
    protected:
    std::string brand;
    int year;

    public:
    vehicle(std::string b, int y) : brand(b), year(y){
    }
    virtual void showinfo() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
    virtual void startengine (){
        std::cout << "Starting engine of vehicle " << std::endl;
    }
};
class Car : public vehicle {
 private:
 int numDoors;

 public:
 Car(std::string b, int y, int n) : vehicle(b, y), numDoors(n) {}

 void showinfo() override {
    vehicle::showinfo();
    std::cout << "Number of doors: " << numDoors << std::endl;
 }

 void startengine() override {
    std::cout << "Car engine is starting! " << std::endl;
 }
};

class ElectricCar : public Car {
    private:
    int batterycapacity;

    public:
    ElectricCar() : Car("default", 0, 0), batterycapacity(0) {} // Set batterycapacity to 0 (default constructor)
   
    ElectricCar(std::string b, int y, int n, int c) : Car(b, y, n), batterycapacity(c){} 

    void showinfo() override {
        Car::showinfo();
        std::cout << "Battery capacity: " << batterycapacity << "kWh" << std::endl;
     }
    
     void startengine() override {
        std::cout << "Electric engine is starting... silent but powerful!" << std::endl;
     }
};

int main(){
   vehicle* vehicleobj = new vehicle ("generic", 2015);
   vehicleobj->showinfo();
   vehicleobj->startengine();
   delete vehicleobj;

   std::cout << "\n";
   
   vehicle* vehicleobj1 = new Car ("Toyota", 2021, 4);
   vehicleobj1->showinfo();
   vehicleobj1->startengine();
   delete vehicleobj1;

    std::cout << "\n";
   
    vehicle* vehicleobj2 = new ElectricCar ("Tesla", 2023, 4, 75);
   vehicleobj2->showinfo();
   vehicleobj2->startengine();
   delete vehicleobj2;

   std::cout << "\n";
   
   vehicle* vehicleobj3 = new ElectricCar ("Nissan", 2022, 4, 75);
   vehicleobj3->showinfo();
   vehicleobj3->startengine();
   delete vehicleobj3;

return 0;  //I didnt add any additiolal comments, I just followed the exact instructions given
}
