#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec;

    int i;
    while(cin >> i){
        ivec.push_back(i);
    }

    for(int i = 0; i < ivec.size() - 1; i += 2){
        cout << ivec[i] + ivec[i+1] << " ";
    }
    cout << endl;

    int low = 0, high = ivec.size() - 1;
    while(low < high){
        cout << ivec[low] + ivec[high] << " ";
        low++;
        high--;
    }
    cout << endl;

    return 0;
}