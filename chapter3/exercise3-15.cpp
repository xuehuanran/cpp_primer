#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string> svec;
    string str;
    while(cin >> str){
        svec.push_back(str);
    }
    for(int i = 0; i < svec.size(); i++){
        cout << svec[i] << endl;
    }
    return 0;
}