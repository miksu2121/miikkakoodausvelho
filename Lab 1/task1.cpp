#include <iostream>
#include <string>

namespace mathoperations {

    int add(int a, int b){
        return a + b;
    }

}

namespace concatstrings {
    std::string stringoperations(const std::string& str1, const std::string& str2){
        return str1 + str2;
    }

}


int main(){
 int sum = mathoperations::add(10, 20);
 std::cout << "sum: " << sum << std::ends;

 std::string concat = concatstrings::stringoperations("Miikka ","Kangasmäki");
 std::cout << " concat: " << concat << std::ends;
 
 return 0;


}


