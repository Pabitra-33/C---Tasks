#include <iostream>

using namespace std;

int main() //main starts
{
	int num1, num2, sum; // Declaring integer variables num1, num2, and sum

    cout<< "\n Sum of two numbers :\n"; // Outputting a message indicating sum of two numbers
	cout<< "-------------------------\n"; // Outputting a separator line   

    cout<< " Input 1st number : "; // Prompting the user to input the first number
	cin >> num1 ; // Taking input for the first number from the user

	cout << " Input 2nd number : "; // Prompting the user to input the second number
	cin >> num2; // Taking input for the second number from the user

	sum = num1 + num2; // Calculating the sum of the two numbers

	cout <<" The sum of the numbers is : " << sum << endl; // Displaying the sum of the numbers
	cout << endl; // Outputting a blank line for better readability

	return 0;
} //main ends