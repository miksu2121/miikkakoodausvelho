#include <iostream>

int main(){

    int value; //we set variable

    std::cout << "Positive value will return its square \n";
    std::cout << "0 skips processing \n " << "Negative value stops program \n";

while(1){ //we use while function to get the continuity 
    std::cout << "Give random value: \n";
    std::cin >> value; //we ask for variable

    if (value > 0) {
        std::cout << "Answer: " << value*value << "\n"; 
    
    } // we do the logic with if, if else and else function
     else if (value == 0) {
        continue;
    }else {
        std::cout << "\nYour given value is negative, program stops! ";
        break;
    } //The code runs until we hit -value and then the program ends
    
return 0;
}