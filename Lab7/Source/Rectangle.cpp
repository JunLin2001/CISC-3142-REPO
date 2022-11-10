#include <iostream>
using namespace std;

class Rectangle {

private: 
float l,w; 
public:
void setlength(float length) {
l = length;
}
void setwidth(float width) {
w = width;
}
float perimeter() {
 return (l+w)*2;
}
float area() {
return (l*w);
}
void show() {
cout << "Length of the Rectangle is " << l << " and the Width of the Rectangle is "<< w << endl;
}
int sameArea(float area1 , float area2) {
if (area1 == area2) {
return 1;
}
else {
return 0;
}
}
};
int main () {

Rectangle r1,r2;
r1.setlength(5);
r1.setwidth(2.5);
r1.show();
r1.perimeter();
r1.area();
r2.setlength(5);
r2.setwidth(18.9);
r2.show();
r2.perimeter();
r2.area();
if (r1.sameArea(r1.area(),r2.area()) == 1) {
cout <<"They have the same area"<<endl;
}
else {
cout <<"The area is not the same"<<endl; 
}
r1.setlength(15);
r1.setwidth(6.3);
r1.show();
r2.show();
if (r1.sameArea(r1.area(),r2.area()) == 1) {
cout <<"They have the same area"<<endl;
}
else {
cout <<"The area is not the same"<<endl; 
}
}
