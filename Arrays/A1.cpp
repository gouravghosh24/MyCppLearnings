// Dynamic programming with C++ and Arrays 
// Lecture: Size of an array
// Refrence: YouTube FreeCodeCamp

#include<iostream>
using namespace std;

int main(){

    int score[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int sum;

    // Here we have created a variable elements to add the elements on the score array and assign it to sum here we have addedd {1+2}=3
    for(int elements:score){
        sum += elements;
        
    }

    // We must always declare a variable to count the size of the array,  
    // for better debudding the program if there is a change in the array size so we do not have to find the loops which is iterating the array elements.
    int count {size(score)}; // number if elements on an array score[]
    int count2 {sizeof(score)}; // size of the total array score[]

    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

    // Range based for loops to get the elements of the array, we will not be able to fetch the index number here as we have an auto iterator
    for(auto m : score){
        cout << "Values: " << m << endl;
    }

    cout << sum << endl << count << endl << count2;
}