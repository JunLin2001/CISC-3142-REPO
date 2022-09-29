#include <iostream>
int main () {
int amount2killmouse = 5;
int massofmouse = 35;
int massofperson = 45400;
double proportion2kill = amount2killmouse/(double)massofmouse;
double amount2killperson = massofperson*proportion2kill;
int massofcan = 350; 
double max = amount2killperson/massofcan; 
    std::cout << " Max amount a person can drink is "<< max << std::endl ;
return 0;
}