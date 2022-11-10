#include <iostream>
using namespace std; 

class Sample {
private: 
    int x;
    double y;

public:
void constructor1() {
x = 0;
}
void constructor2(int variablex) {
x = variablex;
y = 0;
}
void constructor3(int variablex , int variabley) {
x = variablex;
y = variabley;
}
void constructor4(int variablex, double variabley) {
x = variablex;
y = variabley;
}
};