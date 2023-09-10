#include <iostream>

int main()
{

    int data_int{10};
    double data_double{10.05};

    int& ref_data_int{data_int};
    double& ref_data_double{data_double};

    std::cout << "_________________________________________________________________________" << std::endl;
    std::cout << "Data Int: " << data_int << std::endl;
    std::cout << "Data Double: " << data_double << std::endl;
    std::cout << "_________________________________________________________________________" << std::endl;
    std::cout << "Reference Data Int: " << ref_data_int << std::endl;
    std::cout << "Reference Data Double: " << ref_data_double << std::endl;
    std::cout << "_________________________________________________________________________" << std::endl;

    // Assigning New value and the reference value has also changed
    data_int= 20;
    data_double= 20.05;

    std::cout << "_________________________________________________________________________" << std::endl;
    std::cout << "Data Int: " << data_int << std::endl;
    std::cout << "Data Double: " << data_double << std::endl;
    std::cout << "_________________________________________________________________________" << std::endl;
    std::cout << "Reference Data Int: " << ref_data_int << std::endl;
    std::cout << "Reference Data Double: " << ref_data_double << std::endl;
    std::cout << "_________________________________________________________________________" << std::endl;

    // Changing Reference Values
    // This has also updated the base value on data_int and data_double

    ref_data_int = 30;
    ref_data_double = 30.5;

    std::cout << "_________________________________________________________________________" << std::endl;
    std::cout << "Data Int: " << data_int << std::endl;
    std::cout << "Data Double: " << data_double << std::endl;
    std::cout << "_________________________________________________________________________" << std::endl;
    std::cout << "Reference Data Int: " << ref_data_int << std::endl;
    std::cout << "Reference Data Double: " << ref_data_double << std::endl;
    std::cout << "_________________________________________________________________________" << std::endl;

    std::cout << "Happy Coding!";
    return 0;
}