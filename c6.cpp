//Basic arithmetic operations: +, -, *, /, %

#include<iostream>
int main() {

    int a = 5, b = 10;

    int sum = a + b;
    int subs = a-b;
    int product = a*b;
    double div = (double)a / b; //since both a and b are integer c++ performs a integer division so atleast one of the number has to be a double or float
    int mode = a%b;

    std::cout<< "Sum is "<<sum<< '\n'<< "Substraction is " << subs << '\n' << "Product is "<< product << '\n' << "Division is "<< div << '\n' << "Mode is " << mode << '\n';


    return 0;
}

