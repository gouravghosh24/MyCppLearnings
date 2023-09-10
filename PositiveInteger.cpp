/*
Use the variable x as you write this program. 
x will represent a positive integer. Write a program that determines 
if x is between 0 and 25 or between 75 and 100. If yes, 
print the message:_ is between 0 and 25 or 75 and 100, 
where the blank (_) will be the value of x. The program should do nothing if the value of x does not fit into either ranges.
*/

#include <iostream>
using namespace std;

int main() {
  
  int x;
  
  //add code below this line
  cout << " Enter the number here: ";
  
  cin >> x;
  if(x>=0 && x<= 25 || x>=75 && x<=100){

    cout << x << " is between 0 and 25 or 75 and 100";
  }
  else {
        
  }

  //add code above this line
  
  return 0;
  
}