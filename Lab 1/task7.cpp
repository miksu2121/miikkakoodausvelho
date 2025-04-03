#include <iostream>
#include <string>
#define MIN_LENGTH 8 //define macro

int main(){

std::string password;  


std::cout << "Enter password, requirements below: \n" << "-Atleast 8 characters \n";
std::cout << "-Atleast one upper- and lowercase letter \n" << "-Atleast one digit \n";
std::cout <<"-Atleast one special character (e.g., !@#$%^&*) \n" << "Password: ";
std::cin >> password;  //We give the requirements and ask for the password


if(password.length() < MIN_LENGTH ) {  //we use if statement to check if the password is long enough
    std::cout << "Weak password, password must be atleast " << MIN_LENGTH <<" characters! ";
    return 0;
}


std::string specialcharacters = "!@#$%^&*";
//we give specialcharacters value !@#$%^&*, and later we check if password has any of these and then return true
bool uppercase = false, lowercase = false, digits = false, special = false; //give our variables bool false

for(char c : password){  //we go through every charracter and check if they have the requirements
    if (isupper(c)) uppercase = true; //we give bool true if the requirements are met
    else if (islower(c)) lowercase = true;
    else if (isdigit(c)) digits = true; 
    else if (specialcharacters.find(c) != std::string::npos) special = true;
}

if(uppercase && lowercase && digits && special){   //we use if statement and and logic to check if everything is true
    std::cout << "Strong password!!! \n";
}else {
    std::cout <<"Weak password \n";  //if all requirements are not true, we will print weak password and corresponding error message
    if (!uppercase) std::cout << "-You need to provide uppercase letter \n";
    if (!lowercase) std::cout << "-You need to provide lowercase letter \n";
    if (!digits) std::cout << "-You need to provide atleast one digit \n";
    if(!special) std::cout << "-You need to provide atleast one special character \n";
}

return 0;
}