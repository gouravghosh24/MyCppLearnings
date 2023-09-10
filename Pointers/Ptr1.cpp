// 1. Initializing your pointers immediately upon declaration


#include<iostream>

int main(){

    int* ptr1{nullptr};
    int* ptr2{new int(10)};

    
    std:: cout << "Checking PTR's:: " << std:: endl;

    // Below if statement is checking if the Null pointer value is being fetched
    if(ptr2!=nullptr){
        std::cout << "This is not a Null Pointer & its Values is: " << *ptr2 << std::endl; 
    }
    else{
        std::cout << "Still fetching Pointer 1 - Null Value! " << *ptr1 << std::endl;
    }
        std::cout << "Program has run Successfully!" << std::endl;
        
    return 0;
}