/*
You are given 3 numbers. Each number represents the length of a line. 
You need to figure out whether these lines can form a valid triangle.
If a valid triangle can be formed, print "Yes", otherwise print "No".

A triangle is a valid triangle, If and only If, the sum of any two sides of a triangle is greater than the third side. 
For Example, let A, B and C are three sides of a triangle. Then, A + B > C, B + C > A and C + A > B

*/

#include <iostream>
using namespace std;

int main(){

    int Area,Base, height;

    cout << "Enter  Area: ";
    cin >> Area;

    cout << "Enter  Base: ";
    cin >> Base;

    cout << "Enter Height: ";
    cin >> height;

    
    if(Area + Base > height || Base + Area > height && height + Area > Base){

        cout  << "Triangle!";
    }
    else { cout << "Not a Triangle! "; }



}