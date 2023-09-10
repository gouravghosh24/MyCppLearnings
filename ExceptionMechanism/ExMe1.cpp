// Exception handling or No throw

#include <iostream>

int main()
{

    // Exception try catch

    /* Bad for loop below
    for(size_t i{0}; i<10000; i++){

        int* data = new int[100000000];
        std::cout << *data << std::endl;
    }
    */
    /* How to handle the bad for loop using try catch mechanism

        for(size_t i{0}; i<10; i++){

            try{
                    int* data = new int[100000000000000000];
            }
            catch(std::exception& ex){
                std::cout << "Something went wrong " << ex.what() << std::endl;
            }

        }

    */

    // Using No Throw mechanismc
    for (size_t i{0}; i < 85; i++)
    {

        int *data = new (std::nothrow) int[200000000]; // New Dynamic meromry allocation which being done 85 times as i<85 as per the loop
        if (data != nullptr)
        {
            std::cout << "Data Allocated!"
                      << " Address: " << data << " Values: " << *data << std::endl;
        }
        else
        {
            std::cout << "Invalid Allocation!" << std::endl;
        }
    }

    std::cout << "Program has run Successfully!" << std::endl;
}