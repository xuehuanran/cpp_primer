#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void check_and_print(vector<int> ivec)
{
    cout << "size: " << ivec.size() << endl;
    for(auto it = ivec.cbegin(); it != ivec.cend(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void check_and_print(vector<string> ivec)
{
    cout << "size: " << ivec.size() << endl;
    for(auto it = ivec.cbegin(); it != ivec.cend(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10, "hi" };

    check_and_print(v1);
    check_and_print(v2);
    check_and_print(v3);
    check_and_print(v4);
    check_and_print(v5);
    check_and_print(v6);
    check_and_print(v7);

    return 0;
}