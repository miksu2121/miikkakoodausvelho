#include <iostream>


int main(){
int integer = 0;
int answer = 0;


std::cout << "Give integer value";
std::cin >> integer;
for (; integer > 0; integer /= 10) {
    answer += integer % 10;
}


std::cout << "Your given integer digits added together: " << answer;
    return 0;
}

