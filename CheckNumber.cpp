/*
You are given a single number. You need to print one of the following outputs according to the number's nature.

Print 1, if the number is positive
Print -1, if it's negative
Print 0, if it's equal to 0

*/

#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(n<0){
        cout << n << " Number is a Negative Number!";
    }
    else if(n>0){
        cout << n << " Number is Positive!";
    }
    else if(n==0){
        cout << n << " Number is a Zero! "; 
    }

    return 0;
}