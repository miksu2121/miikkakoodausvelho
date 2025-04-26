#include <iostream>
#include <string>

int main(){
  int age;
  std::string name;
  std::cout << "Enter age: ";
  std::cin >> age;
  std::cin.ignore();
  std::cout << "Enter your full name: ";
  std::getline(std::cin, name);

  std::cout << "Age: " << age <<", Name: " << name << std::endl;





}









