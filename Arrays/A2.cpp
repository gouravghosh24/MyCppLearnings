// Dynamic programming with C++ and Arrays 
// Lecture: Array of characters
// Refrence: YouTube FreeCodeCamp

#include<iostream>
using namespace std;

int main(){

    char names[]= {'G','O','U','R','A','V','\0'}; // \0 is a null terminator indictes that the array limit has ended and it has reached the end of the array

    cout << names;

    // Auto used to iterate the string characters on the array and print out the string without using a for loop iterator
    for(auto i : names){
        cout << i << " ";
    }
    return 0;
}