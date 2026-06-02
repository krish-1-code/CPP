//Ternary Operator:

//Basically condensing a if else statement into a singular line of code:


#include<iostream>
int main() {

    int age;
    std::cin>>age;

    //How we used to do it
    /*
    if(age>=18) {
        std::cout<<"Yes you can drive"<<'\n';
    }
    else{
        std::cout<<"No, you can't drive"<<'\n';
    }
    */

    (age > 18) ? std::cout<<"Can drive" : std::cout<<"Can't drive";
    

    return 0;
}