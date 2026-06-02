// Switch Case statement:

#include<iostream>
int main() {


    int day;

    std::cout<<"Enter the day of the week (1-7)"<<'\n';

    std::cin>>day;

    switch(day) {

        case 1:
            std::cout<<"Sunday";
            break;

        case 2:
            std::cout<<"Monday";
            break;

        case 3:
            std::cout<<"Tuesday";
            break;

        case 4:
            std::cout<<"Wednesday";
            break;

        case 5:
            std::cout<<"Thursday";
            break;

        case 6:
            std::cout<<"Friday";
            break;

        case 7:
            std::cout<<"Saturday";
            break;
        default:
            std::cout<<"Out of range";
    }


    return 0;
}