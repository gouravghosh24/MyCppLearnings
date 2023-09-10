#include <iostream>
#include <vector>
using namespace std;

// Used Vector to show the name of and welcome message
// Use a customer Function named MyDetails

void Mydetails()
{
    string name = "Gourav Ghosh";
    cout << "Hi  " << name << endl
         << endl;
}

// Use a customer Function named pairs to show the Vector String and Int
void pairs()
{
    pair<string, string> Details = {"Gourav Ghosh", "SDE"};

    pair<int, pair<string, string>> BasicInfo = {31, {"7003817857", "1/221 Naktala Gariya Kolkata 700047"}};

    cout << "Employee Name: " << Details.first << "\n"
         << "Designation: " << Details.second << endl;

    cout << "Employee Age: " << BasicInfo.first << "\n"
                                                   "Employee Contct Number: "
         << BasicInfo.second.first << "\n"
         << "Employee Address: " << BasicInfo.second.second;
}

// Main Function to complie the C++ code this is the main function

int main()
{

    // Calling the MyDetails Function
    Mydetails();

    // Declaring the user password

    string Password = "Gourav@92";

    cout << "Enter Your login PassCode: ";
    cin >> Password;
    if (Password == "Gourav@92")
    {
        cout << "Hey! Your are logged in successfully! " << endl;
        pairs();
    }
    else
    {
        cout << "Inavlid Login Password!" << endl
             << endl;
    }

    return 0;
}