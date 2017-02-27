#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;

int main()
{
    const string s = "xuehuanran";
    for(auto &c : s){
        cout << c << " "; //ok
        //cout << c += "1" << " "; wrong...
    }
    return 0;
}