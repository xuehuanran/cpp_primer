#include <iostream>
#include <vector>
#include <initializer_list>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::initializer_list;

int count_sum(initializer_list<int> list) {
    int sum = 0;
    for(int i : list) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << count_sum({1,2,3,4,5}) << endl;
    return 0;
}