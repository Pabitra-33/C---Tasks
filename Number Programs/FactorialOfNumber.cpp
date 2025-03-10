#include<iostream>

using namespace std;

int main(){
    int number;
    int fact = 1;//taking the factorial as 1 for initial value
    cout << "Enter the number you want to calculate factorial: ";
    cin >> number;
    while(number >= 1){
        fact = fact * number;
        number--;
    }
    cout << "The factorial of the given number: " << fact << endl;
}