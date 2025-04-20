#include <iostream>
#include <string> 

class Student {

private:   //private attributes
std::string name;
int age;
char grade;
std::string group = "2025 group";

public: 
void setname(std::string n){  //setters
    name = n;
} 
void setage(int a){
    age = a;
}
void setgrade(char g){
    grade = g;
}

std::string getname(){
    return name;
}
int getage(){
    return age;
}
char getgrade(){
    return grade;
}

void displayinfo(){
std::cout << "name: " << getname() << std::endl;
std::cout << "Age: " << getage() << std::endl;
std::cout << "Grade: " << getgrade() << std::endl;
}
};





int main(){
Student studentobj;

studentobj.setname("Miikka");
studentobj.setage(21);
studentobj.setgrade('A');

    std::cout << "Name: " << studentobj.getname() << std::endl;
    std::cout << "Age: " << studentobj.getage() << std::endl;
    std::cout << "Grade: " << studentobj.getgrade() << std::endl;

    studentobj.displayinfo();


    
return 0;
}
