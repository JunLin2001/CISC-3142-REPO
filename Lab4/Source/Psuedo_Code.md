### *Excercise 3.17*

include iostream

include string

include vector 

int main() {

string words;

vector <string> text;

while (cin words)

text.push_back(words)

for (string &s : text) {

    s=toupper(s);

    cout << s << endl;

} 

return 0;

}

### *Excercise3.23*
include iostream

include vector 

int main () {

vector <int> num = {1,2,3,4,5,7,8,9,10,11}

for (auto i: v) {

cout << i << endl;

for(auto item = v.begin() item !=v.end(); item++ ) 
{

item = item *2;

cout << item << endl;

}

}

return 0;

}

### *Excercise4.28*

include iostream

include vector 

include string

cout << "size of built-in type" << endl;

cout << sizeof(int)<< endl;

cout << (wchar) << endl;

cout << (short) << endl;

cout << (long) << endl;

cout << (long long) << endl;

cout << (float) << endl;

cout << (double) << endl;

cout << (long double) << endl;

cout << (char_16) << endl;

cout << (char_32) << endl;

cout << (char) << endl;

cout << (string) << endl;

return 0; 

}

### *Pratice1*

include iostream

include string

int main () {

string item ;

double rate = 0;

double price = 0;

int years =0;

cout please enter item name

cin >> item >> ; 

cout please enter price

cin >> price >>;

cout please enter rate of inflation

cin >> rate >> ;

rate = rate/100

cout please enter years 

cin >> years >> ; 

for (int i =0 ; i <= years ; i++ ) { 

    price = price + (price * rate) 

    cout print price of item after i years is price endl

    }

    return 0;

}

### *Pratice2* 

include iostream

int main () {

int amount2killmouse = 5;

int massofmouse = 35;

int massofperson = 45400;

 double amount2killperson = masssofperson * (amount2killmouse/massofmouse) ; 

int massofcan = 350; 

double maxbottle = massofcan/ammount2killperson; 

cout print maxamount a person can drink is maxbottle 

return 0;

}