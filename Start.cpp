// Patter Printing

// Including the pre processor and libraries
#include <iostream>
using namespace std;

// Main function starts - Program enters the stack
int main()
{
    // Initializing variables I and J
    int b, j;

    // Requesting for an Input from user for the number of lines to print
    cout << "Enter the number of lines: ";
    // Assigning Value entered by user to Variable B
    cin >> b;

    // For loop where i counts the number of times * should print
    for (int i = 1; i <= b; i++)
    {
        // cout << i;
        // i increments and prints the * on the console keeing in mind i is always less than B which is the number of lines requested to print by the user
        cout << "*" << endl;
        // If stamenet is used to check if i always < than the number of lines B and enters the J loop below
        if (i < b)
        {
            // J checks if j<i and starts to print the char * until j is less than i
            for (j = 0; j < i; j++)
            {

                // Prints char *
                cout << "*";
            }
            // J loop exits
        }
        // if condition exits
    }
    // i loop exits
}

// Program ends