#include <iostream>
#include <vector> 
#include <stdio.h>
using namespace std;
int main() {
vector <double> x;
vector <double> y;
double coeff = 0;
double constnum = 0;
double sumofx = 0;
double sumofy = 0;
double sumofxy = 0;
double sumofxsqr = 0;
double sumofysqr = 0;
int size = 0;
freopen("input.txt","r",stdin); 
cin >> size;
for(int i = 0; i < size; i++ ) {
    char comma;
    double xi;
    double yi;
    cin >> xi >> comma >> yi;
    sumofxy += xi * yi;
    sumofx += xi;
    sumofy += yi;
    sumofxsqr += xi * xi;
    sumofy += yi * yi;
    x.push_back(xi);
    y.push_back(yi); 
} 

if (coeff == 0 && constnum == 0) {
    double N = x.size();
double numerator = (N * sumofxy - sumofx * sumofy);
double denominator = (N * sumofxsqr - sumofx*sumofx);
coeff = numerator/denominator;
double termnumerator = (sumofy * sumofxsqr - sumofx * sumofxy);
double termdenominator = (N * sumofxsqr - sumofx * sumofx);
constnum = termnumerator/termdenominator;

cout << "The Fitting Line is y = " << coeff << "x + " << constnum << endl; 
}
return 0 ;
}