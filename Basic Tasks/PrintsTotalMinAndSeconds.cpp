#include <iostream>

using namespace std;

int main() {
    int hour;
    cin >> hour;//taking user input
    int minutes = hour * 60;//calculating total minutes
    int seconds = minutes * 60;//calculating total seconds
    cout << minutes << endl << seconds;//prints the values

    return 0;
}