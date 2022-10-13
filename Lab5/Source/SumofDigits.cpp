#include <iostream>
using namespace std;
int main () {
int n = 0 , x = 0;
cout << "Enter Number" <<  endl;
cin >> n; 
while (n != 0 ) {
    x = x + n%10;
    n = n/10;
}
cout <<" Sum Of Digits: " << x << endl;
return 0; 
}