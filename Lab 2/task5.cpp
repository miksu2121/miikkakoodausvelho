#include <iostream> //include iostream

int main(){

    int size = 5; //make size 5
   int values1[size] = {1, 4, 7, 10, 15}; //We make array with size of 5 and implement the values in
   int values2[size];
   int* ptr = values1 + size -1;  //create pointer to point to the last values

   for( int i = 0; i < size; i++ ){ //We make for loop to reverse the numbers
        values2[i] = *ptr;
        ptr--;

   } 
   std::cout << "Array in reverse: "; //We use for loop to print out the reversed values
   for (int i = 0; i < size; i++){
        std::cout << values2[i] << " ";
        
   }
   
    return 0;

   }
   






