#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str, buf;
    for (string buff; cin >> buff; str += (str.empty() ? "" : " ") + buff);
    cout << "The concatenated string is " << str << endl;
    return 0;
}