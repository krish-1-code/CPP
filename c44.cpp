//Enums :

// Enums are a used defined datatype: Used for a named : integer pair.
// Generally used with switch cuz switch don't accept strings;

#include<iostream>

enum Planets { mercury = 1, venus = 2, earth = 3, mars = 4, jupiter = 5, saturn = 6, uranus = 7, neptune = 8};

int main() {

    Planets planet;
    planet = earth;

    switch(planet){

        case 1:
        std::cout<<"The planet is Mercury"<<'\n';
        break;

        case 2:
        std::cout<<"The planet is Venus"<<'\n';
        break;

        case 3:
        std::cout<<"The planet is Earth"<<'\n';
        break;

        case 4:
        std::cout<<"The planet is Mars"<<'\n';
        break;

        case 5:
        std::cout<<"The planet is Jupyter"<<'\n';
        break;

        case 6:
        std::cout<<"The planet is Saturn"<<'\n';
        break;

        case 7:
        std::cout<<"The planet is Uranus"<<'\n';
        break;

        case 8:
        std::cout<<"The planet is Neptune"<<'\n';
        break;

        default:
        std::cout<<"The planet is unkown"<<'\n';
        break;
        
    }

}