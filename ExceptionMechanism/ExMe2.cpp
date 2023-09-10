// Matching correct names using exception handling

#include<iostream>

int main(){

    std::string name = "Gourav";
    std::string name2;
    std::cout << "Enter name: ";
    std::cin >> name2;
    if(name2!= name){

        try{
            std::cout<< "Enter Correct Name Please! " << std::endl;
        }
        catch(std::exception ex){
            std::cout << "Name Doesnt Match! " << ex.what() << std::endl;
        }
    }
    else{
        std::cout << "Name Matched!" << std::endl;
    }

}