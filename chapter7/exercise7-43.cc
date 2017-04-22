#include <iostream>

using std::cout;
using std::endl;

class NoDefault {

    public:
        int a;
    
    public:
        NoDefault() : a(1) {}
        NoDefault(int aa) : a(aa) {}
};

class C {

    private:
        NoDefault noDefault;

    public:
        C() : noDefault(0) {

        }
};

int main() {
    NoDefault def;
    cout << def.a << endl;
    return 0;
}