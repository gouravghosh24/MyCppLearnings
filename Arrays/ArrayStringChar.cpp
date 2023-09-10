#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void print(char* A){

    

    while(*A != '\0'){
    cout << *A;
    A++;
}

}

int main(){

    char A[6]= "Hello"; // A[6] we have taken 6 for 1 null charachter in the character array A

    char* B = A;


    print(B);

    return 0;
}