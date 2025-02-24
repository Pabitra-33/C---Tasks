#include <iostream>

using namespace std;

int main()
{
    int rad1; // Declaring an integer variable rad1 to store the radius of the sphere
    float volsp; // Declaring a floating-point variable volsp to store the volume of the sphere
    cout << "\n\n Calculate the volume of a sphere :\n"; // Outputting a message indicating the calculation of sphere volume
    cout << "---------------------------------------\n"; // Outputting a separator line

    cout << " Input the radius of a sphere : "; // Prompting the user to input the radius of the sphere
    cin >> rad1; // Taking input for the radius from the user

    // Calculating the volume of the sphere using the formula: (4/3) * π * r^3
    volsp = (4 * 3.14 * rad1 * rad1 * rad1) / 3;

    cout << " The volume of a sphere is : "<< volsp << endl; // Displaying the calculated volume of the sphere
    cout << endl;//adding a newline

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function
