#include <iostream>

int main() {
    int a = 100;
    int& refA = a;  // we put refa to reference a
    refA = 50;      // WHen we change refa it also changes a

    std::cout << "a = " << a;       // a = 50
    std::cout << "refA = " << refA; // refA = 50
//refA also changes a
    return 0;
}




