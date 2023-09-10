#include<iostream>
using namespace std;

void summing(int *sum){

    *sum = *(sum)+5;
    cout << "Adding 5 to the Element in Array A [" << *sum << "]" << endl;


}

int main(){

    int A [] = {10,15,20,25,30}; 
    int *p = A;

    

    for(int i=0; i<5; i++){

           int Arrsize = A[i];

            cout << "Array Element: " << A[i] << " at Index: "<< i << " ";
            summing(A);
            
    }
     
    

    return 0;
}