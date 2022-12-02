#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>

using namespace std; 

struct movie {

int year; 
int length;
string title;
string subject;
string actor;
string actress;
string director;
int popularity;
string awards;
string image; 
};
bool comparepopularity(const movie &a, const movie &b) {
    return a.popularity > b.popularity;
}
int main() {
ifstream input("film.csv"); 
struct movie m;
vector<movie> film;
vector<int> len;
vector<movie> com;
vector<movie> act;
string line;
int total_length;
while(getline(input,line)){
string popularity,year,length;
istringstream iss(line);
getline(iss,year,';');
getline(iss,length,';');
getline(iss,m.title,';');
getline(iss,m.subject,';');
getline(iss,m.actor,';');
getline(iss,m.actress,';');
getline(iss,m.director,';');
getline(iss,popularity,';');
getline(iss,m.awards,';');
getline(iss,m.image,';');
m.year = stoi(year);
m.length = stoi(length);
len.push_back(m.length);
m.popularity = stoi(popularity);
film.push_back(m);
if(m.subject == "Comedy") {
    com.push_back(m);
}
if(m.subject == "Action") {
    act.push_back(m);
}
}
total_length = accumulate(len.begin(),len.end(),0);
cout << "The Total Length of the Movies are: "<<total_length<<"\n";
sort(film.begin(),film.end(),comparepopularity);
for(int i = 0;i != film.size();i++) {
cout <<"Film:"<<film[i].title <<" | Popularity:"<<film[i].popularity<<'\n';
}
int k = 1966;
vector<movie>:: iterator mov = find_if(film.begin(), film.end(),
    [=](const movie& l){ return k == l.year; });
     if ( mov != film.end() ) { 
      cout << "Found the first movie of 1966 which is: " << ( film[mov - film.begin()].title )<<'\n';
     }
   else{ 
      cout << "Did not found a movie released in 1966";
   }
vector<movie>:: iterator react = unique(act.begin(), act.end(),[] (const movie & W, const movie & P) {return W.year == P.year;}
         );
        act.resize(distance(act.begin(),react));
    for(react = act.begin();react != act.end();++react) {
       cout <<"The Unique years within Action are: "<<act[react-act.begin()].year<<' '<<"| And the Film is: "<<act[react-act.begin()].title<<'\n';
    }
    vector<movie>:: iterator recom = unique(com.begin(), com.end(),[] (const movie & j, const movie & e) {return j.year == e.year;}
         );
        com.resize(distance(com.begin(),recom));
    for(recom = com.begin();recom != com.end();++recom) {
       cout <<"The Unique years within Comedy are: "<<com[recom-com.begin()].year<<' '<<"| And the Film is: "<<com[recom-com.begin()].title<<'\n';
    }
    cout << "Their Unique Years are not the same"<<endl;
    return 0;
}

