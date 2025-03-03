#include <iostream>

using namespace std;

void minuteToSec(int minute){
    int sec = minute * 60;
    System.out.println("After converting minute to second: "+sec);
}

int main(){
    cout<<"Enter the time in minute: ";
    int minute;
    cin >> minute;
    minuteToSec(minute);
}