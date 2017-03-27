#include <iostream>
#include "exercise7-12.h"

using std::cin;
using std::istream;
using std::cout;
using std::endl;
using std::cerr;

int main() {
    Sales_data total(cin);
    if (!total.isbn().empty()) {
        istream &is = cin;
        while (is) {
            Sales_data trans(is);
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data?" << endl;
        return -1;
    }
    return 0;
}