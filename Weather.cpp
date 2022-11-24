#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<numeric>
using namespace std;

int main() {

vector<vector<string>> weather ; 

ifstream input ("weather.csv");
ofstream output;
output.open("output.txt");

while (input.good()) {
    vector <string> data ;
    vector <int> temp;
    string line;
    double average; 
    while (input.good()) {
    getline(input,line,',');
    data.push_back(line);
    }
    weather.push_back(data);
    for (int i = 0; i < weather.size(); i++)
{
    for (int j = 0; j < weather[i].size(); j++)
    {
        output << weather[i][j]<<"  ";
                if (j >= 2) {
        temp.push_back(stoi(weather[i][j]));
        }
    }
     output << "\n";
}
 average = accumulate(temp.begin(),temp.end(),0.0)/temp.size();
 output <<"\nThe Average Temperature Across All Months Is "<< average<<" Degrees \n";
 output << "\n";
double runningTotal = 0;
int windowSize = 3;
for(int i = 0; i < temp.size(); i++)
{
     runningTotal += temp[i];   
     if(i >= windowSize)
         runningTotal -= temp[i - windowSize];   
     if(i >= (windowSize - 1))  
         output << "Your Simple Moving Average across 3 month is " << runningTotal / (double)windowSize<< " Degrees \n";
}
output << "\n";
for(int i = 2; i < temp.size(); i++)
{
 runningTotal = (temp[i]*3)+(temp[i-1]*2)+(temp[i-2]);   
    if(i>= windowSize) {
    runningTotal - (temp[i-1]*3)+(temp[i-2]*2)+(temp[i-3]);
    }
     if(i >= (windowSize - 1))  {
         output << "Your Weighted Moving Average across 3 month is " << runningTotal/(double)(3+2+1) << " Degrees \n";
     }
}
output << "\n"<< endl;
}
}