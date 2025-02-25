// C++ program to find the size of int, char, float and double data types 
#include <iostream> 

using namespace std; 
  
int main() 
{ 
    int integerType; //integer
    char charType; //character
    float floatType; //float 
    double doubleType; //double
  
    // Calculating and Printing the size of integer type 
    cout << "Size of int is: " << sizeof(integerType) << "\n"; 
  
    // Calculating and Printing the size of doubleType 
    cout << "Size of char is: " << sizeof(charType) << "\n"; 
  
    // Calculating and Printing the size of charType 
    cout << "Size of float is: " << sizeof(floatType) << "\n"; 
  
    // Calculating and Printing the size of floatType 
    cout << "Size of double is: " << sizeof(doubleType) << "\n"; 
  
    return 0; 
}