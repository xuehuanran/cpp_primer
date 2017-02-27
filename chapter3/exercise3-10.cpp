#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string str;
    cin >> str;
    for(auto c : str){
        if(!ispunct(c)){
            cout << c << endl;
        }
    }
    return 0;
}