#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

void print_vector_int(vector<int>);
void print_vector_string(vector<string>);

int main()
{
    vector<int> v1;
    print_vector_int(v1);

    vector<int> v2(10);
    print_vector_int(v2);

    vector<int> v3(10, 42);
    print_vector_int(v3);

    vector<int> v4{10};
    print_vector_int(v4);

    vector<int> v5{10, 42};
    print_vector_int(v5);

    vector<string> v6{10};
    print_vector_string(v6);

    vector<string> v7{10, "hi"};
    print_vector_string(v7);

    return 0;
}

void print_vector_int(vector<int> vec)
{
    cout << vec.size() << endl;
    if(vec.size() > 0){
        for(auto v : vec){
            cout << v << " ";
        }
        cout << endl;
    }
}

void print_vector_string(vector<string> vec)
{
    cout << vec.size() << endl;
    if(vec.size() > 0){
        for(auto v : vec){
            cout << v << " ";
        }
        cout << endl;
    }
}