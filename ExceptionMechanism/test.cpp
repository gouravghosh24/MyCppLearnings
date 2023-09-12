#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int b = -20;
    int c;
    int d;

    c = -a;
    cout << c << endl;
    d= -b;
    cout << d << endl;
    int e = ++a;
    cout << e << endl;
    cout << "(a > 2)" << (a>>2) << endl;
    cout << "(a < 2)" << (a<<2) << endl;
    return 0;
}
