#include <iostream>

int main()
{

    int *Ptr1 = new int[5]{5, 8, 9, 2, 1}; // Dynamic array

    // 0x6e1c08

    for (int i; i < 5; ++i)
    {

        std::cout << Ptr1[i] << std::endl;
        
       
    }

    
    delete[] Ptr1;  // Deleting all the elements from the Dynamic array
    Ptr1 = nullptr; // Setting Pointer to Null pointer best practice in C++ style

    if (Ptr1 != nullptr)
    {
        std::cout << "Elements Still Exists in the memory! Array Memory Size => " << sizeof(Ptr1) << std::endl;
    }
    else
    {
        std::cout << "All Elements Deleted!  => Array Empty: " << Ptr1 << std::endl;
    }

    std::cout << "Happy Coding!" << std::endl;
    return 0;
}