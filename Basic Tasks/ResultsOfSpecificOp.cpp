#include <iostream> //Including the input-output stream header file

using namespace std; //Using the standard namespace

// Start of the main function
int main() {
    cout << "\n\n Printing the result of some specific operation :\n"; // Outputting a message indicating specific operations
	cout << "-----------------------------------------------\n"; // Outputting a separator line
    // Calculating and displaying results of specific mathematical expressions
    cout<< " Result of 1st expression is : "<< (-1+4*6) <<"\n";//Calculation: -1 + (4*6) = -1 + 24 = 23
    cout << " Result of 2nd expression is : "<< ((35+5)%7) <<"\n" ; // Calculation: (35+5) % 7 = 40 % 7 = 5 (remainder of 40/7)
    cout << " Result of 3rd expression is : "<< (14+-4*6/11) <<"\n" ; // Calculation: 14 - (4*6)/11 = 14 - 24/11 = 14 - 2 = 12
    cout << " Result of 4th expression is : "<< (2+15/6*1-7%2) <<"\n\n" ; // Calculation: 2 + (15/6)*1 - (7%2) = 2 + 2 - 1 = 4 - 1 = 3

    return 0; // Returning 0 to indicate successful program execution
}//main ends