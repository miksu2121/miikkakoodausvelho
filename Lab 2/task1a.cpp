#include <iostream>

int multiply(int a, int b){
    return a * b;
}
int main(){
int a, b = 0;
std::cout << "Give two integer values to multiply \n";
std::cout << "Integer a: ";
std::cin >> a;
std::cout << "Integer b: ";
std::cin >> b;

int product = multiply(a, b);
std::cout << "The product is : " << product;
return 0;
}