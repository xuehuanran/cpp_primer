#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>

using std::ifstream;
using std::istringstream;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    ifstream ifs("../data/book.txt");
    string line;
    vector<string> lines;
    if (ifs) {
        while (getline(ifs, line)) {
            lines.push_back(line);
        }
    }
    for (const auto &s : lines) {
        istringstream iss(s);
        string word;
        while (iss >> word) {
            cout << word << endl;
        }
    }
    return 0;
}