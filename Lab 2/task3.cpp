#include <iostream>

int main(){

    float a, b;
    char operation; //We define our variable to float and char

    std::cout << "Give float value a: ";
    std::cin >> a;
    
    std::cout << "Give float value b: ";
    std::cin >> b;

    std::cout << "Give operator: ";
    std::cin >> operation;  //We ask for inputs

    float answer;
    switch(operation) {  //We construct switch fucntion with 4 diffremnt cases
       
        case '+':
        answer = a+b;
        break;

        case '-':
        answer = a-b;
        break;
        
        case '*':
        answer = a*b;
        break;
        
        case '/':
        answer = a/b;
        break;
    }
    std::cout << "Answer is: " << answer; //We output the answer
    
    return 0;

}