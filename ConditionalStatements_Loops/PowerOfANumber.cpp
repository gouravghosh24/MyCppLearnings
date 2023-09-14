/*

Take input in two variable x and n. Create a variable ans and initialize it to 1
Run a while loop till n > 0. In each iteration mutilply your ans with x. Finally print ans.

*/

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int x,n;
    cin >> x >> n;

    int sum = pow(x,n);
    cout << sum;
    return 0;
}