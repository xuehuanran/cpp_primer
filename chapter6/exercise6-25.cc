#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char** argv) {
    for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }
    string result = *(argv + 1);
    result = result + *(argv + 2);
    cout << result << endl;
    return 0;
}