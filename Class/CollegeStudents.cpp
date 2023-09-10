// Class creation

#include <iostream>

// Class for new student registration
class NewStudent
{

    // Public members so that the variables can be accessed globally
public:
    std::string FirstName;
    std::string LastName;
    int Age;
    bool Gender;
    std::string PhoneNumber;
    std::string Stream;
};


// Function is being declared : This function prints the Registration details
int RegChecker(std::string, std::string, int, bool, std::string, std::string);

// Main Function Entry Point:
// Mainn() Function Starts
int main()
{
    // Creating a method to call the class and store the data on the variables
    NewStudent Data1;

    // FormVice to enter the details from the users
    std::cout << "________________________________________________" << std::endl;
    std::cout << "Your College Registration Page" << std::endl;
    std::cout << "________________________________________________" << std::endl;
    std::cout << std::endl;

    std::cout << "Enter your First name: ";
    std::cin >> Data1.FirstName;
    std::cout << std::endl;

    std::cout << "Enter your Last name: ";
    std::cin >> Data1.LastName;
    std::cout << std::endl;

    std::cout << "Enter your age: ";
    std::cin >> Data1.Age;
    std::cout << std::endl;

    std::cout << "Gender(Male:1 & Female:0 || Enter => 1 or 0): ";
    std::cin >> Data1.Gender;
    std::cout << std::endl;

    std::cout << "Enter your Phone Number: ";
    std::cin >> Data1.PhoneNumber;
    std::cout << std::endl;

    std::cout << "Enter your Stream: ";
    std::cin >> Data1.Stream;
    std::cout << std::endl;

    std::cout << "Thank You for your registration!" << std::endl;

    std::cout << "________________________________________________" << std::endl;

    // method/Function calling
    RegChecker(Data1.FirstName, Data1.LastName, Data1.Age, Data1.Gender, Data1.Stream, Data1.PhoneNumber);

    return 0;
}

// Mainn() Function Ends

// RegChecker() Function Starts
// Function Registration checker is being defined below
int RegChecker(std::string FirstName, std::string LastName, int Age, bool Gender, std::string Stream, std::string PhoneNumber)
{

    if (Age < 33 && Age > 17)
    {

        // Output of the Form
        std::cout << "________________________________________________" << std::endl;
        std::cout << "Your Registration details: " << std::endl;
        std::cout << "________________________________________________" << std::endl;

        std::cout << "Your Name: " << FirstName << " " << LastName << std::endl;
        std::cout << "Your Age: " << Age << std::endl;
        if (Gender == 1)
        {
            std::cout << "Gender: Male" << std::endl;
        }
        else if (Gender == 0)
        {
            std::cout << "Gender: Female" << std::endl;
        }

        else
        {
            std::cout << "Invalid Gender!" << std::endl;
        }
        std::cout << "Your Phone Number: " << PhoneNumber << std::endl;
        std::cout << "Your Stream: " << Stream << std::endl;

        std::cout << "Thank You!" << std::endl;
        std::cout << "________________________________________________" << std::endl;
    }
    else
    {

        std::cout << std ::endl
                  << "According to research from the Council of Graduate Schools," << std::endl
                  << "the average age of graduate students in the U.S. is 33 years old." << std::endl
                  << "You are too old to Register" << std::endl;

        std::cout << "Invalid Registration!" << std::endl;
    }

    return 0;
};

// RegChecker Function Ends