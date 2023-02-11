/*
Jose Guzman
JoseG777
Allows user to manipulate array elements.
*/

#include <iostream>

int main(){
    int myData[10];
    for(int i = 0; i < 10; i++){
        myData[i] = 1;
    }
    for(int i = 0; i < 10; i++){
        std::cout<< myData[i]<< " ";
    }
    std::cout<<"\n";
    int i;
    int v;
    do{
        std::cout<<"Input a new index and value to update the array: \n";
        std::cout<<"Index: \n";
        std::cin>>i;
        std::cout<<"Value: \n";
        std::cin>>v;
        myData[i] = v;
        for(int i = 0; i < 10; i++){
        std::cout<< myData[i]<< " ";
    }
        std::cout<<"\n";
    }
    while(0 <= i and i < 10);
    std::cout<<"Index out of range. Exit. Your updated array is: \n";
    for(int i = 0; i < 10; i++){
        std::cout<< myData[i]<< " ";
    }
    std::cout<<"\n";

}
