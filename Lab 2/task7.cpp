#include <iostream>

int main() {
    int x = 100;
    int* p1 = &x;  // Pointer 1 to x
    int* p2 = p1;  // Pointer 2 points to 1 (same address)

    *p1 = 333;     // We modify value 1

    std::cout << "x = " << x;       // x = 200
    std::cout << "*p2 = " << *p2;  // *p2 = 200 (same address)
//The value is same on both when we change one it changes to the other one also
    return 0;
}




