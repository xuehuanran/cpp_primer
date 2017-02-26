#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string line, word;
    while(getline(cin, line)){
        cout << line << "\n";
    }
    return 0;
}