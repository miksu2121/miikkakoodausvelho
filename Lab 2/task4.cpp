#include <iostream>

int main(){

    int value;

    std::cout << "Positive value will return its square \n";
    std::cout << "0 skips processing \n " << "Negative value stops program \n";

while(1){
    std::cout << "Give random value: \n";
    std::cin >> value;

    if (value > 0) {
        std::cout << "Answer: " << value*value << "\n"; 
    
    }
     else if (value == 0) {
        continue;
    }else {
        std::cout << "\nYour given value is negative, program stops! ";
        break;
    }
    
    
    
}
return 0;
}