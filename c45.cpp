//Object Oriented Programming:

//Class : kinda like a blueprint containing the attrbiutes and methods to create objects
//Objects: These are the instances of class 

#include<iostream>

class Drinks{
    public:
        std::string name;
        int quantity;
        bool alc;

    void cheers(){

        if (alc){
            std::cout<<"I am having a non alc "<<quantity <<" "<<name<<'\n';
        }
        else{
              std::cout<<"I am having a alc "<<quantity <<" "<<name<<'\n';
        }

    }

};


int main(){

    Drinks drink1, drink2;

    drink1.name = "Monster";
    drink1.quantity = 250;
    drink1.alc = false;

    drink2.name = "Red Label";
    drink2.quantity = 500;
    drink2.alc = true;

    drink1.cheers();
    drink2.cheers();

    return 0;
}