#ifndef EXERCISE7_9_H
#define EXERCISE7_9_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

struct Person {
    string name;
    string address;

    string get_name() const {
        return name;
    }

    string get_address() const {
        return address;
    }

    istream& read(istream &is, Person &person) {
        is >> person.name >> person.address;
        return is;
    }

    ostream& print(ostream &os, const Person &person) {
        os << person.get_name() << " " << person.get_address();
        return os;
    }

};

#endif