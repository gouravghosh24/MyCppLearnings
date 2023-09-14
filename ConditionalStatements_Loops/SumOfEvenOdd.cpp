// Sum of even & odd
/*
For the given input, the even digits are 2, 2, and 4, and if we take the sum of these digits, 
it will come out to be 8(2 + 2 + 4), and similarly, if we look at the odd digits, 
they are, 5, 5 and 5 which makes a sum of 15(5 + 5 + 5). 
Hence the answer would be, 8(evenSum) <single space> 15(oddSum)

*/

#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int N;
    int Even =0;
    int Odd =0;
    cin >> N;
    while(N>0){
        int LastDigit = N%10;
        if(LastDigit%2==0){
            Even += LastDigit;
        }
            
        else{
             Odd +=LastDigit;
        }
         N = N/10;
        
    }
    cout << Even << " " << Odd << endl;

    return 0;
}