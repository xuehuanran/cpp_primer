#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int compare(int v, const int *p) {
    return v > *p ? v : *p;
}

int main() {
    int v1, v2;
    cin >> v1 >> v2;
    int result = compare(v1, &v2);
    cout << result << endl;
    return 0;
}