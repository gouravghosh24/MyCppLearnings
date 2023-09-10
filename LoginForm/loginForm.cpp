#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void login();
void registration();
void forgot();

int main()
{

        int c;

        cout << "____________________________________________" << endl
             << endl;
        cout << "_________________Login Menu__________________" << endl
             << endl;
        cout << " 1. Login " << endl
             << endl;
        cout << " 2. Registration " << endl
             << endl;
        cout << " 3. Forgotten Credentials " << endl
             << endl;
        cout << " 4. Exit " << endl
             << endl;
        cout << "____________________________________________" << endl
             << endl;
        cout << " Please Enter your choice " << endl
             << endl;
        cin >> c;

        switch (c)
        {

        case 1:
               // login();
                break;
        case 2:
               // registration();
                break;
        case 3:
               // forgot();
                break;
        case 4:
                cout << "_________________ Thank You __________________" << endl
                     << endl;
                break;
        default:
                system("cls");
                cout << "Invalid Credentials!";
                main();
                break;
        }

        return 0;
}