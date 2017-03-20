#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int &v1, int &v2) {
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}

int main() {
    int v1, v2;
    cout << "please enter two integers : " << endl;
    cin >> v1 >> v2;
    swap(v1, v2);
    cout << v1 << " " << v2 << endl;
    return 0;
}