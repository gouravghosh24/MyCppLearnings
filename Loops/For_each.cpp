#include<iostream>
#include <algorithm>

using namespace std;

int even_num(int n){

    if(n%2==0)
        cout << n << ' ';
    return 0;
}

int main(){

    int arrays[5]{1,2,3,4,5};
    cout << "The array contains all the even Numbers: " << endl;
    for_each(arrays, arrays +5, even_num);
     return 0;

}