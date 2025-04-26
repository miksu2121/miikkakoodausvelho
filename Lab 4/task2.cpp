#include <iostream>
#include <string>



class Book {
private:
    std::string title;
    int pages;

public:
    
    Book(std::string t = "Untitled", int p = 0) : title(t), pages(p) {
        std::cout << "Constructor: \"" << title << "\" with " << pages << " pages\n";
    }

    
    ~Book() {
        std::cout << "Destructor: \"" << title << "\" destroyed\n";
    }

    
    void display() const {
        std::cout << "Title: " << title << ", Pages: " << pages << std::endl;
    }
};


class BookShelf {
   private:
       Book* books; 
       int size;
   
   public:
      
       BookShelf() {
           size = 3;
           books = new Book[size] {
               Book("C++ Fundamentals", 300),
               Book("Data Structures", 450),
               Book("Algorithms", 500),
           };
           std::cout << "BookShelf Constructor: Shelf initialized with " << size << " books\n";
       }
   
       
       ~BookShelf() {
           delete[] books;
           std::cout << "BookShelf Destructor: Shelf destroyed\n";
       }
   
       
       void displayBooks() const {
           std::cout << "\nBooks on shelf:\n";
           for (int i = 0; i < size; ++i) {
               books[i].display();
           }
       }
   };

   int main() {
      BookShelf shelf;
      shelf.displayBooks();
      return 0;
  }
