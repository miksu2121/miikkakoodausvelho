#include <iostream>


int main(){
int integer = 0;  //we define our variables
int answer = 0;


std::cout << "Give integer value";
std::cin >> integer;  // we get the user input
for (; integer > 0; integer /= 10) {  
    answer += integer % 10;
}
/* In the foor loop it continues when our value is greater than 0. integer /=10 takes the last number of
our integer away. The last part of the for loop takes the last digit of the integer and adds it to the answer.
*/
std::cout << "Your given integer digits added together: " << answer;
    return 0;
}

