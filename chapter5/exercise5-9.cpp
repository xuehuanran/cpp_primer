#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char c;
    while(cin >> c){
        if(c == 'a'){
            aCnt++;
        }
        if(c == 'e'){
            eCnt++;
        }
        if(c == 'i'){
            iCnt++;
        }
        if(c == 'o'){
            oCnt++;
        }
        if(c == 'u'){
            uCnt++;
        }
    }

    cout << "a : " << aCnt << endl;
    cout << "e : " << eCnt << endl;
    cout << "i : " << iCnt << endl;
    cout << "o : " << oCnt << endl;
    cout << "u : " << uCnt << endl;

    return 0;
}