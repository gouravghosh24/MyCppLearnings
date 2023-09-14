//Sum of Even Numbers till N
// Given a number N, print sum of all the even numbers from 1 till N

/*
Explaination:
The even numbers from 1 to 6 are: 2, 4, 6, So adding these 3 numbers give a sum of 12.
*/
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    int sum =0;
    cin >> n;
    
    for(int i=0; i<=n; i++){
        if(i%2==0)
        sum +=i;
    }
    cout << sum << endl;

    return 0;
}