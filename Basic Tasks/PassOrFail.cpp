#include <iostream>

using namespace std;

//function declaration and implementation
string checkPassOrFail(int marks) {
    if(marks >= 40){
        return "Pass";
    }
    else{
        return "Fail";
    }
}

//main method
int main() {
    int mark;
    cout << "Enter a mark: ";
    cin >> mark;
    string res = checkPassOrFail(mark);
    cout << "Student is " << res << endl;
}