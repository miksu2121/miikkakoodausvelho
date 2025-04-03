#include <iostream>

int main(){
int integer = 0; //defining variables
int answer = 0;
std::cout << "Give an integer value: ";
std::cin >> integer; //asking for input

for (; integer > 0; integer /= 10) {  
    answer = answer*10 + (integer % 10); 
/*
This works almost in the same way as the last one. Here the diffrence is that when we take the last number
with (integer %10) after that in the next loop cycle it multiplies the last number with 10 and then adds the
next number to the multiplied answer.
*/

}

std::cout << "Your integer value in reverse order is: " << answer; //output

return 0;
}