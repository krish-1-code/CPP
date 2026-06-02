// Common math functions in the math library
// max, min , sqrt, round, abs, ceil, floor, pow
#include<iostream>
#include<cmath>
int main () {

    int x = 10;
    int y = 20;

    int maxnum = std::max(x,y);
    int minnum = std::min(x,y);

    std::cout<<"The max num is "<<maxnum<<'\n';
    std::cout<<"The min num is "<<minnum<<'\n';

    int sqrt9 = sqrt(81);
    std::cout << "The sqrt of 81 is "<<sqrt9<<'\n';

    float num = -6.766767;

    float abs = round(num);

    std::cout<<abs;



    return 0;
}