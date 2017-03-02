#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    unsigned score;
    while(cin >> score)
    {
        string result = 
            score > 90 ? "high pass" : (score < 60 ? "fail" : (score < 75 ? "low pass" : "pass"));
        cout << result << endl;
    }
    return 0;
}