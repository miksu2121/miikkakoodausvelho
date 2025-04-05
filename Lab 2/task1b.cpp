#include <iostream>

double multiply(double a, double b){
    return a * b;
}
int main(){
double a, b = 0;
std::cout << "Give two values to multiply \n";
std::cout << "Integer a: ";
std::cin >> a;
std::cout << "Integer b: ";
std::cin >> b;

double product = multiply(a, b);
std::cout << "The product is : " << product;
return 0;
}