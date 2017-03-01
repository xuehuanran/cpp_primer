#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<int> ivec(10);

    for(auto it = ivec.begin(); it != ivec.end(); it++){
        cin >> *it;
        *it *= 2;
        cout << *it << " "; 
    }

    return 0;
}