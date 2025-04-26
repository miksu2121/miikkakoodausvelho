#include <iostream>
#include <string>



class Car { //car class
private:
    std::string modelName;
    int year;
    double price;

public:
    //contructor + deafult values
    Car(std::string m = "Unknown", int y = 2000, double p = 0.0) : modelName(m), year(y), price(p) {}

    //destrcutor
    ~Car() {
      std::cout << "Car Destructor: " << modelName << " destroyed\n";
    }

    // ask user for car details
    void input() {
      std::cout << "Enter model: ";
      std::getline(std::cin, modelName);
        std::cout << "Enter year: ";
        std::cin >> year;
        std::cout << "Enter price: ";
        std::cin >> price;
        std::cin.ignore();
        std::cout << "Car Constructor: " << modelName << " (" << year << ") - $" << price << std::endl;
    }

    //show car details
    void display() const {
      std::cout << "Model: " << modelName << ", Year: " << year << ", Price: $" << price << std::endl;
    }
};

//class carcollection
class CarCollection {
private:
    Car* cars;
    int size;

public:
    CarCollection() { //contructor
      std::cout << "How many cars do you want to enter? ";
      std::cin >> size;
      std::cin.ignore(); 

        cars = new Car[size];

        for (int i = 0; i < size; ++i) {
         std::cout << "\nEnter details for car " << i + 1 << ":\n";
            cars[i].input();
        }

        std::cout << "CarCollection initialized with " << size << " cars\n";
    }

    
    ~CarCollection() { //destructor
        delete[] cars;
        std::cout << "CarCollection destroyed\n";
    }

    
    void displayCars() const { //display for all cars
      std::cout << "\n--- Car Collection ---\n";
        for (int i = 0; i < size; ++i) {
            cars[i].display();
        }
    }
};

int main() {
    CarCollection collection; //main
    collection.displayCars();
    return 0;
}









