#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // leap year if perfectly divisible by 400
    if (year % 400 == 0) {
      cout << year << " is a leap year.";
    }
    // a leap year if not divisible by 100 and divisible by 4
    else if (year % 4 == 0 && year % 100 != 0) {
      cout << year << " is a leap year.";
    }
    // all other years are not leap years
    else {
      cout << year << " is not a leap year.";
    }
  return 0;
}