#include <iostream>
#include <stdlib.h>

using namespace std;

void Hello()
{

    cout << "Hello World! " << endl;
}

// Below A and B are pointers to integers
int *AddNumber(int *A, int *B) // A and B are being called by reference and will passon the Address if A and B in main function it is not a call by value
{

    int *C = (int *)malloc(sizeof(int)); // Allocation Memory Space for the Additoon operation in the Heap memory

    *C = (*A) + (*B); // A and B are being dereferenced as we are trying access and operate on the variables A and B in the main function 

    return C;
}

int main()
{

    int A = 2;
    int B = 4;

    int *ptr = AddNumber(&A, &B);
    Hello();
    cout << *ptr << endl;

    return 0;
}