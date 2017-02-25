#include <iostream>
#include <typeinfo>

int main()
{
    const int i = 42; // i is const int
    auto j = i; // j is int
    const auto &k = i; // k is reference to const int
    auto *p = &i; // p is a pointer to const int
    const auto j2 = i, &k2 = i; // j2 is const int, k2 is reference to const int

    std::cout << "i is " << typeid(i).name() << "\n"
              << "j is " << typeid(j).name() << "\n"
              << "k is " << typeid(k).name() << "\n"
              << "p is " << typeid(p).name() << "\n"
              << "j2 is " << typeid(j2).name() << "\n"
              << "k2 is " << typeid(k2).name() << "\n";

    return 0;
}
