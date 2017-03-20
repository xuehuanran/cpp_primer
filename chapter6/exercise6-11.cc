#include <iostream>

using std::cout;
using std::endl;

void reset(int &val) {
    val = 0;
}

int main() {
    int i = 42;
    reset(i);
    cout << i << endl;
    return 0;
}