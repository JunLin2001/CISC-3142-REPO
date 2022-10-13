#include <iostream>
using namespace std;
int isPrimeNum(int);
int main()
{
   bool isPrime;
   for(int n = 3; n < 100; n++) {
      isPrime = isPrimeNum(n);

      if(isPrime == true)
         cout<<n<<" ";
   }
   return 0;
}
int isPrimeNum(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }  
   return isPrime;
}