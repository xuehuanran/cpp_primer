#include <fstream>
#include <vector>
#include <string>
#include <iostream>

using std::ifstream;
using std::vector;
using std::string;
using std::cout;
using std::endl;

void readFile(ifstream &ifs, vector<string> &vec) {
    string tmp;
    if (ifs) {
        while (getline(ifs, tmp)) {
            vec.push_back(tmp);
        }
    }
}

int main() {
    ifstream is("../data/book.txt");
    vector<string> vec;
    readFile(is, vec);
    for (auto iter = vec.begin(); iter != vec.end(); iter++) {
        *iter = *iter;
        cout << *iter << endl;
    }
}