#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
int main()
{
    vector<int> v = {66, 22, 33, 54, 65, 126, 227, 552, 91, 220};
    for(auto i: v)
        cout << i << " ";
    cout << endl;
    for(auto item = v.begin(); item != v.end(); ++item)
        *item = *item << 1;
    for(auto i : v)
        cout << i << " ";
    cout << endl;
    return 0;
}