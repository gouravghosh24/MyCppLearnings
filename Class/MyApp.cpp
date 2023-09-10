#include<iostream>
using namespace std;

class UserData{
    public:
    string FName;
    string LName;
    string PNumber;
    int Age;
    bool Gender;
};

void LoginForm(){
    UserData UsrData;

    cout << "Enter your Name: " << endl;
    cin >> UsrData.FName;
    cout << "Your Name is: " << UsrData.FName << endl;
}

void UserDataShow(string FName, string LName, string PNumber, int Age, bool Gender){

    UserData Info;

    cout << "OutPut::  "<< Info.FName;

}

int main(){

    UserData Data;

    LoginForm();
    UserDataShow(Data.FName, Data.LName, Data.PNumber, Data.Age, Data.Gender);

    return 0;

}
