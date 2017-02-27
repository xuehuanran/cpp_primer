#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    if(str1 == str2){
        cout << "str1 and str2 is equal." << endl;
    } else if(str1 < str2){
        cout << "str2 is larger." << endl;
    } else {
        cout << "str1 is larger." << endl;
    }
    if(str1.size() == str2.size()){
        cout << "str1 and str2 have the same length." << endl;
    } else if(str1.size() == str2.size()){
        cout << "str1 is longer." << endl;
    } else {
        cout << "str2 is longer." << endl;
    }
    return 0;
}