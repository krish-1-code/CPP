//Pointer : A vraiable that store the memory address of another variable.


// &-Adress of operator     *- derefencing operator.

#include<iostream>
int main() {

    std::string name = "Krish Ksh";
    int age = 21;

    //Using a pointer to store the adress of the name and age:

    std::string *addressname = &name;
    int *addressage = &age;
    
    std::cout<< addressname <<'\t';
    std::cout << &name <<'\n';
    std::cout<< addressage <<'\t';
    std::cout<< &age <<'\n';



    // Things are kinda differnt for arrays;

    int arr[] = {1,2,3,4,5};

    //int *arraddress = &arr; // Array is itself an address so we can't use the address of operator in front of the array;

    int *arraddress = arr; 


    std::cout<< arraddress<<'\n';
    std::cout<< arr<<'\n';

    std::cout<< *arr; // print the first element of the array
    return 0;
}