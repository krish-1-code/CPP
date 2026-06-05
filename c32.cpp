//Memory Address: Address of operator: &
//Let's use the address of operator to understand how much space is occupied by each datatype:  

#include<iostream>
int main() {

    std::string name ="Krish Kushwaha";
    int age = 21;
    float gpa = 3.75;
    char sex = 'M';
    bool is_student = true;

    std::cout<<&name<<'\n';
    std::cout<<&age<<'\n';
    std::cout<<&gpa<<'\n';
    std::cout<<&sex<<'\n';
    std::cout<<&is_student<<'\n';

    return 0;


}