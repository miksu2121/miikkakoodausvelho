#include <iostream>
#define SQUARE(x) x*x //We define the macro and give the rule in the same line

int main(){
int x; //we have to also define the variable x
std::cout << "Give value for x: "; //We ask for x value
std::cin >> x;

std::cout <<"Square of your given number is: " << SQUARE(x); // we print out the answer
}

