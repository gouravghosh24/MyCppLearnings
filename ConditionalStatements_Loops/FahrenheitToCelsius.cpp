//Fahrenheit to Celsius
/*
We need need to start calculating the Celsius values for each of the Fahrenheit Value which starts from 20. 
So starting from 20 which is the given Fahrenheit start value, we need to compute its corresponding Celsius value which computes to -6. 
We print this information as <Fahrenheit Value> a tab space"\t" <Celsius Value> on each line for each step of 13 we take to get the next value of Fahrenheit and extend this idea till we reach the end that is till 119 in this case. 
You may or may not exactly land on the end value depending on the steps you are taking.
*/

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int S, E, W, C;
    cin >> S >> E >> W;
        for(int i=S; i<=E; i+=W){
            C = (i-32)*5/9;
            cout << i << " " << C << endl;
        }
    return 0;
}