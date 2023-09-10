// Pointer and Dynamic Memory
//  Functions :
//  1. malloc() 2. calloc() 3. realloc() 4. free()
//   Operators in C++
//  1. new 2. delete

/*
    1. malloc() => void malloc(size_t size) => It is used to allocate a memory space in the dynamic memory allocation
    2. calloc() =>
    3. realloc() =>
    4. free() =>

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of an Array: " << endl;
    cin >> n;

    int *A = (int *)malloc(n * sizeof(int));
    int *B = (int *)calloc(n, sizeof(int));
    int *C = (int *)realloc(A, 3 * n * sizeof(int));

    for (int i = 0; i <= n; i++)
    { // if we do not initialize i to the array in malloc it will assign a garbage value whereas in calloc it will assign 0 to every index
        A[i] = i + 1;
        //  B[i] = i + 1;
        C[i] = i + 1;
    }

    // free(A); // free() will free the memory space and garbage values will be thrown
    // A[1]=2; // We can still access and store value at 1th index of A

    for (int i = 0; i < n; i++)
    {
        cout << endl
             << A[i] << " " << endl;
        // cout << B[i] << " " << endl;

        cout << C[i] << " " << endl;
    }

    return 0;
}