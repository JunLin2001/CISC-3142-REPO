#include <iostream>
#include <string>
int main () {
std::string item;
double rate = 0;
double price = 0;
int years =0;
    std::cout <<"please enter item name"<< std::endl;
    std::cin >>item ; 
    std::cout <<"please enter price"<< std::endl;
    std::cin >>price ;
    std::cout <<"please enter rate of inflation"<<std::endl;
    std::cin >>rate;
rate = rate/100;
    std::cout <<"please enter years"<<std::endl;
    std::cin >>years; 
for (int i=0 ; i <= years ; i++ ) { 
    price = price + (price * rate) ;
    std::cout << "price of item after "<< i << " years is "<<price << std::endl;
    }
    return 0;
}