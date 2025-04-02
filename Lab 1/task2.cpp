#include <iostream>
#include <string>  //we include the needed libraries
#include <cctype> //cctype is included for toupper, to convert string to uppercase
#include <algorithm> // we use this library for the third question

int main(){
    std::string str;   
    std::cout << "Give a random word: ";  // we ask for the word and save it to str
    std::cin >> str;
    

    for (char &c : str) {  // For loop to include each charracter of the word 
        c = std::toupper(c); // converting all the charracters to uppercase
    }
    std::cout << "your word in uppercase is: " << str << "\n";
   

    int vowels = 0; 
    for(char c : str) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') { // if function to check if the charracters match
            vowels++; // adds one to vowels if true
        }
    }
    std::cout << "Number of vowels in word is: " << vowels << "\n";


    reverse(str.begin(), str.end());
    std::cout << "The string reversed: " << str << "\n";

return 0;
}


