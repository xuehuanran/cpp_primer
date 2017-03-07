#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string word, pre = "", repeat;
    while(cin >> word)
    {
        if(pre == word && isupper(word[0]))
        {
            repeat = word;
            break;
        }
        pre = word;
    }
    if(!repeat.empty())
    {
        cout << "the repeated word is " << repeat << endl;
    }
    else
    {
        cout << "no repeated word" << endl;
    }
    return 0;
}