#include<iostream>
using namespace std;



int main(){

    int a= 0x0F; //Hexadecimal Value of 15
    int b = 0b00001111; //Binary value of 15
    int c {2}; // Braced initialization
    int d{a}; // Declared initialization
    
    cout << a <<endl;
    cout << b<<endl;
    cout << c << endl;
    cout << d;
    return 0;
}