#include <iostream>
using namespace std;

class UserData
{
public:
    string FName;
    string LName;
    string PNumber;
    int Age;
    bool Gender;

    // Memeber Functions declaration
    void RegForm();
    void Profiles();
    void loginVerify();
};

// Class for the Login
class Login
{
public:
    string Username;
    string Password;

    void LoginForm();
    bool check();
};

void Login::LoginForm()
{

    UserData RegiForm;

    cout << "Enter your UserName: ";
    cin >> Username;
    cout << "Enter Password: ";
    cin >> Password;
    if(Username == Username && Password == Password){
            RegiForm.RegForm();
    }
    else{
        cout << "Invalid Login!" << endl;
    }
    
}


// Member Function defination

// Fnction for signup page
void UserData::RegForm()
{
    // FormVice to enter the details from the users
    std::cout << "________________________________________________" << std::endl;
    std::cout << "Your College Registration Page" << std::endl;
    std::cout << "________________________________________________" << std::endl;
    std::cout << std::endl;

    std::cout << "Enter your First name: ";
    std::cin >> FName;
    std::cout << std::endl;

    std::cout << "Enter your Last name: ";
    std::cin >> LName;
    std::cout << std::endl;

    std::cout << "Enter your age: ";
    std::cin >> Age;
    std::cout << std::endl;

    std::cout << "Enter your Phone Number: ";
    std::cin >> PNumber;
    std::cout << std::endl;

    std::cout << "Gender(Male:1 & Female:0 || Enter => 1 or 0): ";
    std::cin >> Gender;
    std::cout << std::endl;

    std::cout << "Thank You for your registration!" << std::endl;

    std::cout << "________________________________________________" << std::endl;
};

// Memeber Function to Print the Form/Profile
void UserData::Profiles()
{
    // Output of the Form
    std::cout << "________________________________________________" << std::endl;
    std::cout << "Your Registration details: " << std::endl;
    std::cout << "________________________________________________" << std::endl;

    std::cout << "Your Name: " << FName << " " << LName << std::endl;
    std::cout << "Your Phone Number: " << PNumber << std::endl;
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

    std::cout << "Thank You!" << std::endl;
    std::cout << "________________________________________________" << std::endl;
}

// Login Verification function

void UserData::loginVerify()
{

    if (Age > 17)
    {
        cout << "Your Login was successfull!" << endl;
        Profiles();
    }
    else
    {
        cout << "You are not eligable! Under Age!" << endl;
    }
}

// Main Function Entry Point

int main()
{

    UserData RegiForm; // Calling the class in the main function and assigning a variable

    // calling memeber Functions of class Userdata
    // RegiForm.RegForm();
    // RegiForm.Profiles();
    // RegiForm.loginVerify();

    // Method for Login
    Login Logins;

    Logins.LoginForm();

    return 0;
}