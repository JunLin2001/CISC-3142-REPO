##2.1 
What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

*short,int,long,long long, they all have different bit sizes. signed type can represent negative or positive numbers, while a unsigned type can only represent numbers that is equal to or greater than zero.Float is a single precision point , while double is double precision point.*

##2.2
To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

*rate-double , principal-double , payment-double. none of these numbers can be fully represented by integers or single precesion points.*

##2.3
```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```
*it will compile*
*32*
*4294967264*
*32*
*-32*
*0*
*0*

##2.10
``` cpp
std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;
}
```
*global_str = empty sring , global_int = 0, local_int = undefine, local_str = empty.*

##2.12
(a) int double = 3.14;
(b) int _;
(c) int catch-22;
(d) int 1_or_2 = 1;
(e) double Double = 3.14;

*(a) invalid because keywords cant be used as a identifier.*
*(c) invalid because - is not premitted.* 
*(d) invalid because identifier cant begin with a digit.*

##2.13
```cpp
int i = 42;
int main()
{
    int i = 100;
    int j = i;
}
```
* j = 100 because the local variable i value overwrote the global one.*

##2.14
```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
    sum += i;
std::cout << i << " " << sum << std::endl;
```
*it's legal and the out is 45 100.*

##2.17
```cpp
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```
*the out is 10 10.*

##2.27
(a) int i = -1, &r = 0;
(b) int *const p2 = &i2;
(c) const int i = -1, &r = 0;
(d) const int *const p3 = &i2; 
(e) const int *p1 = &i2;
(f) const int &const r2;
(g) const int i2 = i, &r = i;

*(b) is legal.*
*(c) is legal because we can initialize const with a literal.*
*(d) is legal because const points to the const int , and initializes with i&2.*
*(e) is legal.* 
*(g) is legal because const can be bound to a plain variable.*

##2.28
(a) int i, *const cp;
(b) int *p1, *const p2;
(c) const int ic, &r = ic;
(d) const int *const p3;
(e) const int *p;

*(a) is illegal because const pointer is not initialized.*
*(b) is illegal because const pointer is not initialized.*
*(c) is illegal because the variable is not initalized.*
*(d) is illegal because the pointer to const is not initalized.*


