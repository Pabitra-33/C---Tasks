#include <iostream> // Including the input-output stream header file
// Using the standard namespace
using namespace std;
// Start of the main function
int main() {
    cout << "\n\n Print the sum of two numbers :\n"; // Outputting a message to print the sum of two numbers
	cout << "-----------------------------------\n"; // Outputting a separator line
    // Declaration of integer variable a and b
	int a;
	int b;
	int sum; // Declaration of integer variable 'sum'
	
	a = 29; // Assigning value 29 to variable 'a'
	b = 30; // Assigning value 30 to variable 'b'
	sum = a + b; // Calculating the sum of 'a' and 'b' and assigning it to 'sum'
	
	cout << " The sum of "<< a << " and "<< b <<" is : "<< sum <<"\n\n" ; // Outputting the calculated sum

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function

