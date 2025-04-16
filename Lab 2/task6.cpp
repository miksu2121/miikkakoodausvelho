#include <iostream>
#include <cstring> //Include libraries


struct Student {  // Use struct
    char name[50];
    int id;
    float grade;
};

const int MAX_STUDENTS = 50; //We int max stundents with max of 50

int main() {
     Student students[MAX_STUDENTS]; // Array of the stundents
     int count = 0;  // We int studentammount and choice     
     int choice;

     do { //we make loop for "menu" and take input to choose the task
          std::cout << "\n1. Add a Student\n2. Display All students\n3. Search for a student by ID\n4. Exit the program\nChoice: ";
          std::cin >> choice;
          switch (choice) {
              case 1:
                  if (count < MAX_STUDENTS) { // if limit is not reached we ask for name, id and grade.
                      std::cout << "Name: "; 
                      std::cin.ignore(); //removes newline from input buffer
                      std::cin.getline(students[count].name, 50); // Gets the whole input including spaces, 50 character limit
                      std::cout << "ID: "; 
                      std::cin >> students[count].id; 
                      std::cout << "Grade: "; 
                      std::cin >> students[count].grade;
                      count++; // We also add the id and grade to the same place in array and then add 1 to the count
                  } else std::cout << "Limit reached.\n"; //if the limit (50) is reached we break the loop
                  break;
              case 2:
                  for (int i = 0; i < count; i++) // In this case we Display all stundets using for loop
                      std::cout << "Name: " << students[i].name << ", ID: " << students[i].id << ", Grade: " << students[i].grade << '\n';
                  if (count == 0) std::cout << "No students.\n";
                  break;
              case 3: {
                  int id, found = 0;  //int id and found
                  std::cout << "Enter ID: "; std::cin >> id; //we ask for id
                  for (int i = 0; i < count; i++) //we compare the given id for our student id's
                      if (students[i].id == id) {
                          std::cout << "Found: " << students[i].name << ", Grade: " << students[i].grade << '\n'; //if the id matches it will output the infromation
                          found = 1; break;
                      }
                  if (!found) std::cout << "Not found.\n"; //if the id is not matched we print not found
                  break;
              }
              case 4: std::cout << "Program stopped\n"; break; //we stop the program 
              default: std::cout << "Invalid.\n";
          }
      } while (choice != 4); //If we dont exit the program, it will run the loop again
  
      return 0;
  }




