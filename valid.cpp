//Jose Guzman
//Lab 2A

#include <iostream>
int main(){
    int x;
    std::cout<<"Please input enter an integer within the range of 0 < x < 100 \n";
    std::cin>> x;
    if(0 < x and x < 100){
        std::cout<< x*x<< "\n";
    }
    while(x < 0 or x > 100 or x == 0 or x == 100){
        std::cout<< "Please re-enter: \n";
        std::cin>> x;
        if(0 < x and x < 100){
        std::cout<< x*x<< "\n";
    }
    }
}