#include <iostream>
#include <string>

using std::istream;
using std::string;
using std::cout;
using std::endl;
using std::cin;

istream& func(istream &is) {
    string tmp;
    while (is >> tmp) {
        cout << tmp << endl;
    }
    is.clear();
    return is;
}

int main() {
    istream &is = func(cin);
    cout << is.rdstate() << endl;
    return 0;
}