#include<iostream>

using namespace std;

string checkClubEntry(int age) {
    if(age >= 21){
        cout<<"You can enter the club";
    }else{
        cout<<"You can't enter the club";
    }
}

int main(){
    //cout<<"Enter the age:"
    int age;
    checkClubEntry(age);
}