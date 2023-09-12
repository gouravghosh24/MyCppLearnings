#include <iostream>

using namespace std;

int main()
{

    //Write your code here
    int x,y,quardrant;

    cin >> x, y;
    if(x>0 && y >0){
        cout << "1st Quardrant";
    }
    else if(x<0 && y >0){
        cout << "2nd Quardrant";
    }
    else if(x<0 && y<0){
        cout << "3rd Quardrant";
    }
    else if(x>0 && y<0){
        cout << "4th Quardrant";
    }

    return 0;
}