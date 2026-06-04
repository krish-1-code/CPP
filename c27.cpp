//Using for each loop to iterate over an array of string.
//Also pass over the array to a function
//Also look for the element given by the user.

#include<iostream>

int search(std::string names[], int size, std::string name1);

int main() {

    std::string names[] = {"Leixs","Rylee","Xing","Zetlee"};

    int size = sizeof(names)/ sizeof(names[0]);

    std::string name1;

    std::cout<<"what name do you want to search";
    std::getline(std::cin,name1);

    int result = search(names, size, name1);

    if (result){
        printf("In the list");
    }
    else{
        printf("not in the list");
    }

}

int search(std::string names[], int size, std::string name1) {

    for( int i = 0 ; i < size; i++) {

        if(names[i] == name1){
            return 1;
        }
    }
    return 0;
    
}