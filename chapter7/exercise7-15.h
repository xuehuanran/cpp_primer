#ifndef EXERCISE7_15_H
#define EXERCISE7_15_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

struct Person;
istream& read(istream& is, Person& person);

struct Person {
    string name;
    string address;

    Person() = default;
    Person(const string &a_name, const string &a_address) {
        name = a_name;
        address = a_address;
    }
    Person(istream& is) {
        read(is, *this);
    }

    string get_name () const {
        return name;
    }

    string get_address () const {
        return address;
    }
};

istream& read(istream& is, Person& person) {
    is >> person.name >> person.address;
    return is;
}

ostream& print(ostream &os, const Person &person) {
    os << person.name << " " << person.address;
    return os;
}

#endif