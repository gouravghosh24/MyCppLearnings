#include <iostream>
using namespace std;

// Function to perform an addition using pointers

void increment(int *j)
{

    *j = *(j) + 1;
}

int main()
{

    int a = 10;
    string b;
    char c = 'C';

    int *p = &a;
    string *p2 = &b;
    char *p3 = (char *)c; // Casting *P3 pointer to Char c variable
    void *p4 = &c;        // Void Pointers - Generic pointers - no data types assigned
    int **s = &p;         // Pointer to pointer
    int ***q = &s;        // Pointer ***Q pointing to **S and **S Points to *P and *P points to A

    cout << "______________________________________" << endl;
    cout << "Pointers in C++" << endl
         << "______________________________________" << endl;
    cout << "|Address of P => " << p << "_|" << endl;            // P prints the address of a
    cout << "|Value of P => " << *p << "_|" << endl;             // P prints the value of a
    cout << "|value of A => " << a << "_|" << endl;              // A prints the Value of A
    cout << "|Address of A => " << &a << "_|" << endl;           // A now prints the Address of A
    cout << "|Address of A + 1 => " << *p + 1 << "_|" << endl;       // Increments the Value  of A + 1 = 11
    cout << "|Address of P => " << *(p + 1) << "_|" << endl;     // Increments the Address  of A, Normally an integer address should increase by 4
    cout << "|Value of B => " << *p2 << "_|" << endl;            // P2 prints the value of B
    cout << "|Address of B => " << p2 << "_|" << endl;           // P2 prints the Address of B
    cout << "|Address of B => " << &b << "_|" << endl;           // Prints the Address of B
    cout << "|Value of B => " << b << "Empty String _|" << endl; // Prints the value of B

    cout << "|Ln:27- Value of C => " << &c << "_|" << endl;
    cout << "|Ln:28- Address of C using Void Pointer P4 => " << p4 << "_|" << endl;

    cout << "|Size of A => " << sizeof(a) << " Bytes _|" << endl; // Prints the Size of A
    cout << "|Size of B => " << sizeof(b) << " Bytes _|" << endl;
    cout << "|Size of P => " << sizeof(p) << " Bytes _|" << endl;
    cout << "|Size of *P => " << sizeof(*p) << " Bytes _|" << endl;
    cout << "|Size of P2 => " << sizeof(p2) << " Bytes _|" << endl;
    cout << "|Size of *P2 => " << sizeof(*p2) << " Bytes _|" << endl;
    cout << "|Size of *P3 => " << sizeof(*p3) << " Bytes _|" << endl;
    cout << "|Size of C => " << sizeof(c) << " Bytes _|" << endl;
    cout << "|Size of P3 => " << sizeof(p3) << " Bytes _|" << endl; // Char has a size of 1 byte and does not depend on architecture.
                                                                    // Size of a pointer depends on architecture and, typically,
                                                                    // 4-byte for 32 bit archs and 8-byte for 64 bit ones.
                                                                    // Your program prints the memory address of the space allocated for b.
                                                                    //   It's not related to the amount of memory reserved.
    cout << "|Size of *P3 => " << sizeof(*p3) << " Bytes _|" << endl;

    cout << "|Value of **S => " << **s << "_|" << endl; // This is pointer to pointer refrence - Pointing to a pointer P
                                                        // and P points to A = so value outputs 10

    cout << "|Value of ***Q => " << ***q << "_|" << endl;

    // Incrementing the values by Dereferencing

    ***q = 20; // Dereferencing Pointer to update the Value of A and the *P **S pointers pointing to A

    cout << "|Updated Value of A=> " << a << "_|" << endl;
    cout << "|Updated Value of *P=> " << *p << "_|" << endl;
    cout << "|Updated Value of **s=> " << **s << "_|" << endl;

    // Using the Increment function to perform Arithmatic operation with pointers

    increment(&a);

    cout << "|Updated Value of A => " << **s << "_|" << endl; // A prints 21 as the values has been reassigned
                                                              // as 20 and after a function call increment()
                                                              // the values increases to 21 as the function is performing an addition

    cout << "---------------------------------------" << endl;

    return 0;
}