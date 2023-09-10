#include <iostream>
using namespace std;

int main(){

     int size;
     int *ptr;

     cout << "Enter the number of the employees: " << endl;
     cin >> size;

     ptr = new int[size];
     cout << "Enter the names: " << endl;
     for(int i=0; i<size; i++){
        cin >> ptr[i];
     }
    for (int i =0; i<size; i++){
        cout << ptr[i];
    }

    return 0;
}

// 120x5ffe80