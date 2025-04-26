#include <iostream>
#include <string> 

class complex {

   private:
   double real;
   double imaginary;
   
   public: 
   complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

   complex operator+(const complex& other) {
      return complex(real + other.real, imaginary + other.imaginary);
   }

   complex operator-(const complex& other) {
      return complex(real - other.real, imaginary - other.imaginary);
   }
   
   complex operator/(const complex& other) {
      double denominator = other.real * other.real + other.imaginary * other.imaginary;
      double real2 = (real * other.real + imaginary * other.imaginary) / denominator;
      double imaginary2 = (real * other.real - imaginary * other.imaginary) / denominator;
      return complex(real2, imaginary2);
   }

   friend std::ostream& operator<<(std::ostream& os, const complex& c);
};


std::ostream& operator<<(std::ostream& os, const complex& c) {
   if (c.imaginary < 0)
       os << c.real << " - " << -c.imaginary << "i";
   else
       os << c.real << " + " << c.imaginary << "i";
   return os;

}

int main() {
   complex c1(4, 5), c2(2, -3);
   std::cout << "c1 = " << c1 << std::endl;
   std::cout << "c2 = " << c2 << std::endl;
   std::cout << "Sum = " << c1 + c2 << std::endl;
   std::cout << "Difference = " << c1 - c2 << std::endl;
   std::cout << "Quotient = " << c1 / c2 << std::endl;
   return 0;
  }


