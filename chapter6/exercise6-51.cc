#include <iostream>

using std::cout;
using std::endl;

void f() {
    cout << "f()" << endl;
}

void f(int i) {
    cout << "f(int)" << endl;
}

void f(double d1, double d2) {
    cout << "f(double, double)" << endl;
}

void f(int i1, int i2) {
    cout << "f(int, int)" << endl;
}

int main() {
    //f(2.56, 42); error
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}