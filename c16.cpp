//Do while loop: A ATM machine:

#include<iostream>
int main() {

    int pin = 9089;
    int pinx;
    int chance = 3;

    do {
        std::cout<<"Please enter your pin number "<<'\n';
        std::cin>>pinx;

        if(pinx != pin && chance >= 0) {

            std::cout<<"Incorrect pin"<<'\n';
            chance -= 1;
        }        
        
        std::cout<<"You now have "<<chance<< " chance left"<< '\n';

        if(chance == 0) {

            std::cout<<"Card has been blocked";
            return 0;
        }

    }while(pinx != pin);

    std::cout<<"Pin Accepted!"<<'\n';

    return 0;
}
