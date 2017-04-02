#ifndef EXERCISE7_22_H
#define EXERCISE7_22_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

class Person {

    private:
        string name;
        string address;

    public:
        Person() = default;
        Person(const string &a_name, const string &a_address) {
            name = a_name;
            address = a_address;
        }
        Person(istream &is) {
            read(is, *this);
        }
    
    friend istream& read(istream&, Person&);
    friend ostream& print(ostream&, const Person&);
};

istream& read(istream &is, Person &person) {
    is >> person.name >> person.address;
    return is;
}

ostream& print(ostream &os, const Person &person) {
    ostream << person.name << " " << person.address;
    return os;
}

#endif