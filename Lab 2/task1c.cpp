#include <iostream>
#include <cmath>  //cmath library for ceil function
double multiply(int a, double b, bool c){  //we make the multiply function
    if (!c) {
        return a*b;
    } else {
        return static_cast<int>(ceil(a*b)); 
    } //if we have bool 0 we return a*b if bool is 1 we will ceil the product
}

int main(){
int a;
double b;
bool c;
std::cout << "Give two values to multiply \n";
std::cout << "Give integer a: ";
std::cin >> a;
std::cout << "Give decimal b: ";
std::cin >> b;
std::cout << "give true(1) or false(0) for boolean";
std::cin >> c; //Give the variables and ask for inputs



if(c) { //when c is 1 we will ceil the the product of a*b
double answer = static_cast<int>(multiply(a, b, c));
std::cout << "Answer ceiled: " << answer;

} else { //else we will just return a*b and after print the results
    double answer = multiply(a, b, c);
    std::cout << "Answer is: " << answer;
}

return 0;
}