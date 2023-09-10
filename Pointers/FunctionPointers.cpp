// Function Pointers
//
//
//
//

#include <iostream>
#include <stdio.h>

using namespace std;

int FunctionPointers(int A, int B)
{

    return A + B;
}

int main()
{
    int x;

    int (*ptr)(int, int);
    ptr = FunctionPointers;
    x = ptr(9, 3);
    cout << x << endl;
    return 0;
}