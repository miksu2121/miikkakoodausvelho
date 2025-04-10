
#include <iostream>
/*I will make 3 functions in the same way and try to see if I can swap the values
I first get a and b and then switch the values
*/


void swapByValue(float a, float b) { 
    float switchvalue = a;
    a = b;
    b = switchvalue;
}
void swapwithPointers(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}
void swapwithReferences(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}
int main() { // In main I will ask for inputs and cout the results
    float a, b;
    std::cout << "Give value x:";
    std::cin >>  a;
    std::cout << "Give value y:";
    std::cin >>  b;

    std::cout << "\nOriginal values: x = " << a << ", y = " << b;


    swapByValue(a, b);
    std::cout << "\nAfter Value: x = " << a << ", y = " <<b;

    swapwithPointers(&a, &b);
    std::cout << "\nAfter Pointers: x = " << a << ", y = " << b;

    swapwithReferences(a, b);
    std::cout << "\nAfter References: x = " << a << ", y = " << b;

    return 0; // The switch only works for pointers, method pointers are the best for this kind of task
}