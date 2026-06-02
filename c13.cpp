//Logical Operator: &&  ||  !

//Do i Like the weather:

#include<iostream>
int main() {

    float temp;

    std::cout<<"Enter today's temperature"<<'\n';
    std::cin>>temp;

    bool is_humid = true;
    bool is_raining =  true;

    if(temp >= 25 && is_humid){
        std::cout<<"I don't like this weather";
    }
    else if(temp <= 25 && temp >=15 && is_raining){

        std::cout<<"I like this weather";
    }
    else{
        std::cout<<"Not sure about the weather";
    }


    return 0;
}