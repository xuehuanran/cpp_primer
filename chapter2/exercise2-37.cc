#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;

    cout << "a = " << a << "\n"
         << "b = " << b << "\n"
         << "c = " << c << "\n"
         << "d = " << d << "\n"; 
    
    return 0;
}