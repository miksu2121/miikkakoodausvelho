#include <iostream>
#include <string>

class car { // class car
protected:
std::string model;
int year;
float price;

public:
car(std::string m = "Unknown", int y = 2000, double p = 0.0) : model(m), year(y), price(p) {}

virtual ~car(){}

void inputbasic() { //void display and void input
  std::cout << "Enter model: ";
  std::cin >> model;
  std::cout << "Enter year: ";
  std::cin >> year;
  std::cout << "Enter price: ";
  std::cin >> price;
}
void displaybasic()const {
  std::cout << "Model: " << model << ", Year: " << year << ", Price: " << std::endl;
}

virtual void input() = 0;
virtual void display() const = 0;

};

class ElectricCar : public car { // class electric car

private:
 float batterySize = 0;
public:
  ElectricCar() : batterySize(0.0){} 
  ~ElectricCar(){}
void input() override {
  car::inputbasic();  
  std::cout << "Enter battery size (kWh): ";
  std::cin >> batterySize;
}
void display() const override {
  car::displaybasic(); 
  std::cout << ", Battery Size: " << batterySize << " kWh" << std::endl;
}
};

class GasCar : public car { // class gascar
private:
  float fuelCapacity;
public:
  GasCar() : fuelCapacity(0.0){}
  ~GasCar(){}

void input() override {
  car::inputbasic();
  std::cout << "Enter fuel capacity (gallons): ";
  std::cin >> fuelCapacity;
}
void display() const override {
  car::displaybasic();
  std::cout << ", Fuel Capacity: " << fuelCapacity << " gallons" << std::endl;
}
};

class HybridCar : public car{ // class hybrid car
private:
  float batterySize;
  float fuelCapacity;
public:
  HybridCar() : batterySize(0.0), fuelCapacity(0.0){}
  ~HybridCar(){}
void input() override {
  car::inputbasic();
  std::cout << "Enter battery size (kWh): ";
  std::cin >> batterySize;
  std::cout << "Enter fuel capacity (gallons): ";
  std::cin >> fuelCapacity;
}

void display() const override {
  car::displaybasic();
  std::cout << ", Battery Size: " << batterySize << " kWh"
  << ", Fuel Capacity: " << fuelCapacity << " gallons" << std::endl;
}
};

int main() {
  int n;
  std::cout << "Enter the number of cars: ";
  std::cin >> n;

car** fleet = new car*[n];  // use array and pointers to store the car types
int* typeArray = new int[n];

for (int i = 0; i < n; ++i) { // for loop to input each car details
  std::cout << "\nCar #" << (i+1) << ":\n";
  std::cout << "Select type (1 = Electric, 2 = Gas, 3 = Hybrid): ";
  int type;
  std::cin >> type;

while (type < 1 || type > 3) {
  std::cout << "Invalid choice. Please enter 1, 2, or 3: ";
  std::cin >> type; // we ask for car type
}
        
typeArray[i] = type;

switch (type) {
  case 1:
  fleet[i] = new ElectricCar();
  break;
  case 2:
  fleet[i] = new GasCar();
  break;
  case 3:
  fleet[i] = new HybridCar();
  break;
} // choose the case based on the input

fleet[i]->input(); // we call input to gather the car details from user
}

std::cout << "\n--- Fleet Information ---\n";
    
for (int i = 0; i < n; ++i) { // Now we display the information 
  std::cout << "Car #" << (i+1) << ": ";
  switch (typeArray[i]) { // we choose the correct display function with the car type from array
  case 1:
  static_cast<ElectricCar*>(fleet[i])->display();
  break;
  case 2:
  static_cast<GasCar*>(fleet[i])->display();
  break;
  case 3:
  static_cast<HybridCar*>(fleet[i])->display();
  break;
}
}
std::cout << "\n--- Cleaning up Fleet ---\n";
for (int i = 0; i < n; ++i) {
  std::cout << "Destroying " << (i + 1) << " car" << std::endl;
  delete fleet[i];
}
  delete[] fleet;
  delete[] typeArray; // just cleanups and last displays

return 0;
}









