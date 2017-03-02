#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = 
    {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    typedef int int_array[4];

    // version one: using range for
    for(int_array &a : ia){
        for(int i : a){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    // version two: using subscripts
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // version three: using pointers
    for(int_array *p = ia; p != ia + 3; p++){
        for(int *q = *p; q != *p + 4; q++){
            cout << *q << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}