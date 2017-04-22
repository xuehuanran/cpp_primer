#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

class Example {
    public:
        static const double rate = 6.5;
        static const int vecSize = 20;
        static vector<double> vec;
};

int main() {
    cout << Example::rate << endl;
    cout << Example::vecSize << endl;
    return 0;
}