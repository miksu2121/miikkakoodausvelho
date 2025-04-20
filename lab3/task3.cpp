#include <iostream>
#include <string> 

class Car{

private:  //
std::string brand;
int year;

public: 

Car(std::string b, int y ) : brand(b), year(y){ //constructor
    std::cout << "Car " << brand << " from " << year << " created." << std::endl;    
}
~Car(){  //destructor
std::cout << "\nCar " << brand << " destroyed." << std::endl;
}

void showinfo(){
    std::cout << "Car brand: " << brand << "\nManufacturing year: " << year;
}
};

int main(){
Car* newcar = new Car("BMW", 2024);  //

newcar->showinfo();

delete newcar;    
return 0;
}
