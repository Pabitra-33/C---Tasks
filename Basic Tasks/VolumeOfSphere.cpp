#include <iostream>

using namespace std;

int main()
{
    int rad1;//Declaring an integer variable rad1 to store the radius of the sphere
    float volsp;// A floating-point variable volsp to store the volume of the sphere
    cout << "\n\n Calculate the volume of a sphere :\n";
    cout << "---------------------------------------\n"; 
    
    cout << " Input the radius of a sphere : "; // Prompting the user to input the radius of the sphere
    cin >> rad1; // Taking input for the radius from the user

    // Calculating the volume of the sphere using the formula: (4/3) * π * r^3
    volsp = (4 * 3.14 * rad1 * rad1 * rad1) / 3;

    cout << " The volume of a sphere is : "<< volsp << endl;
    cout << endl;

    return 0; // Returning 0 to indicate successful program execution
}
