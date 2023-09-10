#include <iostream>
#include<stdio.h>

using namespace std;

int  SizeOfEl(int A[], int size){

    int sum = 0;
    for(int i=0; i<size;i++){

        sum += A[i];
    }
    

 return sum;

}
void Double(int* A, int size){

    for(int i = 0; i<size; i++){
        A[i] = A[i]* 2;
        
    }
}

int main(){

    int A[]={1,2,3,4,5};
    int size;

    //Here the sizeof(Arrays) = 20 as each array elements are contains 4 Bytes each element 4bytes* 5Elements {1,2,3,4,5}
    //Here the Sizeof(Arrays[0]) = 4 as each element contains 4 bytes
    size = sizeof(A)/sizeof(A[0]);

    cout << endl << "Total Addition of All the element values: " << SizeOfEl(A, size) << endl; //Prints the sum of the Array Elements which is A[] = {1+2+3+4+5} Totals = 15

    //Function SizeOfEl() is called below:

    SizeOfEl(A, size);
    

     cout << "_____________________________________________________________________________________________________________" <<endl; //Line for Table designing
    
        cout << "Elements inside array A[]: " << "\t";

        cout << "Printing the Array element values: "<< "\t";
        for(int i=0; i<size; i++){

        cout << A[i] <<"\t";
    }

    cout << endl << "_____________________________________________________________________________________________________________|" <<endl; //Line for Table designing

    //Functions Double() is called below:
    Double(A, size);
    
    cout << endl << "_____________________________________________________________________________________________________________" <<endl; //Line for Table designing
    cout << "| Each {Elemenst *2 Times}: ";
    
    cout << "Doubeling the Array element values: "<< "\t";
    for(int i =0; i<size; i++){
        cout << A[i] << "\t";
        //cout << A[0];
    }

    cout << endl << "_____________________________________________________________________________________________________________|" <<endl; //Line for Table designing

    // String Array::

    string D[10]= {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};


    cout << endl << "_______________________________________________________________________________________________________________________" <<endl; //Line for Table designing
    cout << "| Elements at Index: ";
    for(int i=0; i< 10; i++){

        
        //Printing the Array elements
        cout << "| " << D[i] << " @ " << i;
        cout << " |";
        
    }

    cout << endl << "_______________________________________________________________________________________________________________________|" <<endl; //Line for Table designing

}