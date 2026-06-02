//Write a function that checks if the num is palindrome.

#include<iostream>

bool checkpalin(int num){

    if(num < 0){
        
        return false;
    }
    int act_num = num;
    int new_num = 0;

    while(num != 0){

        int mod_num = num % 10;
        num /= 10;
        new_num = new_num * 10 + mod_num;

    }
    return new_num == act_num ;
      
}
int main() {

    int num;
    std::cout<<"Enter number to check if it is plaindrome: "<<'\n';
    std::cin>>num;

    bool result = checkpalin(num);
   
    if (result) {
        std::cout<<"The number is palindrome"<<'\n';
    }
    else{
        std::cout<<"The number is not palindrome"<<'\n';
    }

    return 0;
}