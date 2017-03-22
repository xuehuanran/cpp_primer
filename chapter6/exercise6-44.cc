#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

inline bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout << isShorter(s1, s2) << endl;
    return 0;
}