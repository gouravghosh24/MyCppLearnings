#include <iostream>
using namespace std;

// Creating a Function named ThreeDArray and access the Array D inside main Function

void ThreeDArray(int X[][2][2]) 
{

    int *ptr4 = X[0][0];
    int sum = (*ptr4 + 1) + (*ptr4 + 4);
    cout << sum << endl;
}

// main Function Call

int main()
{

    // New 2D Array

    int A[2][3] = {{1, 2, 3}, {
                                  4,
                                  5,
                                  6,
                              }};

    // New 3D Array

    int D[3][2][2] = {{{1, 2}, {3, 4}},     // Block D[0]
                      {{5, 6}, {7, 8}},     // Block D[1]
                      {{9, 10}, {11, 12}}}; // Blok D[2]

    // Initializing Pointers

    int *ptr = A[0];
    int *ptr2 = A[1];
    int *ptr3 = D[0][2];

    // Printing the Arrays below

    cout << sizeof(&A) << endl;
    cout << (*ptr + 1) << endl;
    cout << *ptr + 5 << endl;
    cout << *ptr << endl;
    cout << *ptr2 << endl;
    cout << "Outputs A &A *A all are the same: " << &A << " " << A << " " << *A << " " << ptr << " " << &ptr << " "
         << "Reference to the first memory address" << endl;

    cout << " => " << *ptr3 + 4 << endl; // Dereferenceing the D Array using a pointer ptr3 and adding + 6 prints
                                         //   the 6th elements in the 3 array element in the Array D

    cout << " Size of: " << sizeof(D) << endl; // Total size of the D Array is 48 as each block{1,2,3,4} containts 16 bytes/block

    // calling the 3D array function
    ThreeDArray(D);

    return 0;
}