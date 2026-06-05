//Multidimensional array:

//it's like array[][2] - we don;t specifically have to enter the row value; but columns are compulsory;

//Create a program for the sum of 2X2 matrix;

#include<iostream>

int main() {

    int matrix1[2][2]; 
    int matrix2[2][2]; 
    int matrix3[2][2]; 
 
    std::cout<<"Enter the values of matrix1: "<< '\n';
    for(int i = 0; i<2;i++) {
        for(int j = 0;j < 2; j++) {

            std::cin>>matrix1[i][j];
            //std::cout<<'\t';
        }
        //std::cout<<'\n';
    }

    std::cout<<'\n';

    std::cout<<"Enter the values of matrix2: "<<'\n';
    for(int i = 0; i<2;i++) {
        for(int j = 0;j < 2; j++) {

            std::cin>>matrix2[i][j];
            //std::cout<<'\t';
        }
        //std::cout<<'\n';
    }

    for(int i = 0; i<2;i++) {
        for(int j = 0;j < 2; j++) {

           matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    std::cout<<'\n';
    std::cout<<"The sum of both the matrix are : "<<'\n';

    for(int i = 0; i<2;i++) {
        for(int j = 0;j < 2; j++) {

            std::cout<<matrix3[i][j];
            std::cout<<'\t';
        }
        std::cout<<'\n';
    }
    return 0;
}
