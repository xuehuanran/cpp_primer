#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto i : vec){
        cout << ( (i % 2) ? (i * 2) : i ) << " ";
    } 
    cout << endl;
    return 0;
}