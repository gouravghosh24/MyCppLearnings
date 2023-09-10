/*
Use the variable x as you write this program. 
x will represent a string. Write a program that determines if x is a primary color (red, blue, or yellow). 
If yes, print _ is a primary color, where the blank (_) is the value of x. If no, print _ is not a primary color, 
where the blank (_) is the value of x. 
For this particular exercise, make sure that your code specifically checks if the variable x is equivalent to the strings red, blue, 
or yellow in all lowercase. Otherwise, your test cases will fail.

*/

#include <iostream>
using namespace std;

int main() {
  
  string x;
  
  //add code below this line

  cout << "Enter the colour: ";
  cin >> x;

  if (x =="red" || x =="blue" || x=="yellow"){
    cout << x + " is a primary colour";
  }
  else { 
    cout << x + " is not a primary colour";
    
    }

  //add code above this line
  
  return 0;
  
}