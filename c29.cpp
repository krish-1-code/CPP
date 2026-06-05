//User input in array:

#include<iostream>
int main() {

    int n;

    std::cout<<"How many numbers you want to enter? "<<'\n'; 
    std::cin>>n;

    int num[n];

    for(int i =0; i < n ; i++) {

        std::cout<<"Enter number #"<<i+1<< ": ";
        std::cin>>num[i]; 
    }

    std::cout<<"Numbers Entered by you are: "<<'\n';

    for(int i = 0; i < sizeof(num)/sizeof(num[0]); i++) {

        std::cout<<num[i]<<'\n';
    }

    return 0;
}