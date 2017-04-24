#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

using std::string;
using std::vector;
using std::ifstream;
using std::istringstream;
using std::cout;
using std::endl;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main() {
    string line, word;
    vector<PersonInfo> people;
    ifstream ifs("../data/person_info.txt");
    istringstream record;
    while (getline(ifs, line)) {
        PersonInfo personInfo;
        record.clear();
        record.str(line);
        record >> personInfo.name;
        while (record >> word) {
            personInfo.phones.push_back(word);
        }
        people.push_back(personInfo);
    }
    for (const auto &info : people) {
        cout << "name : " << info.name;
        cout << " phones : ";
        for (const auto &s : info.phones) {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}