//Constructor:

//Constructor is a special type of method that is initialized when we call the class

#include<iostream>

class Student{
    public:
        std::string name;
        double gpa;
        int age;

        Student( std::string name, double gpa, int age){

            this->name = name;
            this->age = age;
            this->gpa = gpa;
        }

};

int main() {

    Student S1("Krish",3.86,18);

    std::cout<<S1.name<<'\n';
    std::cout<<S1.gpa<<'\n';
    std::cout<<S1.age<<'\n';

}