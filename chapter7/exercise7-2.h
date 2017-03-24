#ifndef EXERCISE7_2_H
#define EXERCISE7_2_H

#include <string>

using std::string;

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

#endif