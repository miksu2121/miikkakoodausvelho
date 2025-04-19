#include <iostream>
#include <string>


class Book
{
private:
std::string title;
int pages;
std::string author = "Peter";

protected:
float price;

public:
std::string publisher;

void displayauthorinfo(){
    std::cout << "Author is " << author;


}
};

int main(){

    Book bookobject; 
    bookobject.displayauthorinfo();
    return 0;


}


