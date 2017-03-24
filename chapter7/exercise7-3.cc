#include <iostream>
#include "exercise7-2.h"

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main() {
    struct Sales_data total;
    if (cin >> total.bookNo >> total.unit_sold >> total.revenue) {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.unit_sold >> trans.revenue) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                cout << total.bookNo << " " << total.unit_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.unit_sold << " " << total.revenue << endl;
    } else {
        cerr << "No data?" << endl;
        return -1;
    }
    return 0;
}