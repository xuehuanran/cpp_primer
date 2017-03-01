#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::endl;
using std::cin;
using std::cout;

int main()
{
    vector<string> text;
    string line;

    while(getline(cin, line)){
        text.push_back(line);
    }

    for(auto it = text.begin(); it != text.end(); it++){
        for(auto  c = it->begin(); c != it->end(); c++){
            if(isalpha(*c)){
                *c = toupper(*c);
            }
        }
    }

    for(auto it = text.cbegin(); it != text.cend(); it++){
        cout << *it << endl;
    }
    
    return 0;
}