#include <iostream>



/*  
    Function is being declared in here:

    When a function is defined beforethe main() function in the program, then function declaration is not required,
    but writing the function after the main() function requires function declaration first, 
    else there will be a compilation error*/
int MyFun1(int, int);

int main()
{

    int a{70};
    int b{40};

    int c{1};
    int d{2};


    MyFun1(a, b); // Method calling - Calling the Function
    if(a<b){
        MyFun1(c,d); // Reusing the Function
    }
    else{ std::cout << "Thank you!" << std::endl;}
    return 0;
}

// Defining the Function declared before the Main function
int MyFun1(int x, int y)
{

    if (x > y)
    {
        std::cout << "X is Bigger: " << x << std::endl;
    }
    else
    {
        std::cout << "Y is Bigger: " << y << std::endl;
    }

    return 0;
}