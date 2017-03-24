#ifndef EXERCISE7_11_H
#define EXERCISE7_11_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

istream& read(istream &is, Sales_data &item);

struct Sales_data {
    string bookNo;
    unsigned unit_sold = 0;
    double revenue = 0.0;

    Sales_data() = default;
    Sales_data(const string &s) {
        bookNo = s;
    }
    Sales_data(const string &s, unsigned n, double p) {
        bookNo = s;
        unit_sold = n;
        revenue = n * p;
    }
    Sales_data(istream&);
    

    string isbn() const {
        return bookNo;
    }

    void combine(const Sales_data &rhs) {
        unit_sold += rhs.unit_sold;
        revenue += rhs.revenue;
    }
};

Sales_data::Sales_data(istream &is) {
    read(is, *this);
}

Sales_data add(const Sales_data &s1, const Sales_data &s2) {
    Sales_data sum = s1;
    sum.combine(s2);
    return sum;
}

istream& read(istream &is, Sales_data &item) {
    double price;
    is >> item.bookNo >> item.unit_sold >> price;
    item.revenue = item.unit_sold * price;
    return is;
}

ostream& print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.unit_sold << " " << item.revenue;
    return os;
}

#endif