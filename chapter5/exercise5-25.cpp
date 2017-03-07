#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main(void)
{
    int i, j;
    cin >> i >> j;

    try{
        if(j == 0){
            throw runtime_error("divisor is zero");
        }
        cout << i / j << endl;
    } catch(runtime_error err){
        cout << err.what() << endl; 
    }

    cout << "test " << endl;
  
    return 0;
}