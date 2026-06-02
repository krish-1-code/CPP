//While loop

//Make sure the loop runs infinitely untill the user enter their name:


#include<iostream>
int main() {

    std::string name;

    std::cout<<"Enter your name"<<'\n';
    std::getline(std::cin, name);
    
    while(name.empty()){
        
        std::cout<<"You have to enter your name: "<<'\n';
        std::getline(std::cin, name);
        
    }

    std::cout<<"Hello, "<<name<<'\n';
    return 0;
}