#ifndef EXERCISE7_26_H
#define EXERCISE7_26_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

class Sales_data{

    private:
        string bookNo;
        unsigned unit_sold = 0;
        double revenue = 0.0;

        inline double avg_price() const;
    
    public:
        Sales_data() = default;
        Sales_data(const string &s) : bookNo(s) {}
        Sales_data(const string &s, unsigned n, double p) {
            bookNo = s;
            unit_sold = n;
            revenue = n * p;
        }
        Sales_data(istream& is) {
            read(is, *this);
        }

        void combine(const Sales_data &item);
        string isbn() const {
            return bookNo;
        }
    
    friend istream& read(istream &is, Sales_data &item);
    friend ostream& print(ostream &is, const Sales_data &item);
    friend Sales_data add(const Sales_data &item1, const Sales_data &item2);

};

void Sales_data::combine(const Sales_data &item) {
    unit_sold += item.unit_sold;
    revenue += item.revenue;
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

Sales_data add(const Sales_data &item1, const Sales_data &item2) {
    Sales_data sum = item1;
    sum.combine(item2);
    return sum;
}

inline double Sales_data::avg_price() const {
    return unit_sold ? (revenue / unit_sold) : 0;
}


#endif