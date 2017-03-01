#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::begin;
using std::end;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *i = begin(a), *j = end(a);
    vector<int> ivec(i, j);
   
    for(auto i : ivec){
        cout << i << " ";
    }
    return 0;
}