#include <iostream>
#define OurLimit 50U // we name our macro and give it value 50

int main(){
for (unsigned short i = 2; i <= OurLimit; i += 2) { //More suitable variable is unsigned short (only 2 bytes)
    std::cout << i << " "; // we make the for loop and print the answers
}
return 0;
}



