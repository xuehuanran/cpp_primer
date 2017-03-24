#ifndef EXERCISE7_6_H
#define EXERCISE7_6_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

struct Sales_data {
    string bookNo;
    unsigned unit_sold = 0;
    double revenue = 0.0;

    string isbn() const {
        return bookNo;
    }

    void combine(const Sales_data &rhs) {
        unit_sold += rhs.unit_sold;
        revenue += rhs.revenue;
    }
};

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