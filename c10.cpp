//If else statements.

// if (conditions) {
//  statement } followed by else if () {} and else {}

//Check if the user can drive or now

#include<iostream>
int main() {

    int age;

    std::cout<<"Enter your age"<<'\n';
    std::cin>>age;

    if(age>18) {
        std::cout<<"Elligible";
    }
    else{
        std::cout<<"Not elligible";
    }

    return 0;
}