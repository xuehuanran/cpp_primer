#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string> svec;
    string word;

    while(cin >> word){
        svec.push_back(word);
    }

    for(auto &str : svec){
        for(auto &c : str){
            c = toupper(c);
        }
    }

    for(auto str : svec){
        cout << str << endl;
    }

    return 0;
}