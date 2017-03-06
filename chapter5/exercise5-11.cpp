#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    int blank_cnt = 0, tab_cnt = 0, newLine_cnt = 0; 
    char c;
    while((c = getchar()) != EOF){
        switch(c){
            case 'a' : case 'A' :
                aCnt++;
                break;
            case 'e' : case 'E' :
                eCnt++;
                break;
            case 'i' : case 'I' :
                iCnt++;
                break;
            case 'o' : case 'O' :
                oCnt++;
                break;
            case 'u' : case 'U' :
                uCnt++;
                break;
            case ' ' : 
                blank_cnt++;
                break;
            case '\t' :
                tab_cnt++;
                break;
            case '\n' :
                newLine_cnt++;
                break;
            default:
                break;
        }
    }

    cout << "a : " << aCnt << endl;
    cout << "e : " << eCnt << endl;
    cout << "i : " << iCnt << endl;
    cout << "o : " << oCnt << endl;
    cout << "u : " << uCnt << endl;

    cout << "blank : " << blank_cnt << endl;
    cout << "tab : " << tab_cnt << endl;
    cout << "newLine : " << newLine_cnt << endl;

    return 0;
}