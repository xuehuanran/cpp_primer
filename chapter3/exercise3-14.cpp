#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

int main()
{
    int i;
    vector<int> ivec;
    while(cin >> i){
        ivec.push_back(i);
    }
    for(int i = 0; i < ivec.size(); i++){
        cout << ivec[i] << " ";
    }
    return 0;
}