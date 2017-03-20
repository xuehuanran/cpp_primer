#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap_pointer(int *&p1, int *&p2) {
    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
}

int main() {
    int v1, v2;
    cin >> v1 >> v2;
    int *p1 = &v1, *p2 = &v2;
    swap_pointer(p1, p2);
    cout << *p1 << " " << *p2 << endl;
    return 0;
}