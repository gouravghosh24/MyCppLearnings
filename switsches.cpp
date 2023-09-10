#include<iostream>
using namespace std;

int main(){

    int a;
    cout << "Enter the Number";
    cin >> a;
    switch(a){
        case 2: cout << "Number is: " << a;
        break;
        case 3: cout << "Number is: " << a;
        break;
        default: cout << "No!";
        break;
    }

    return 0;
}