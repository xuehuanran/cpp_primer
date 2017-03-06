#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;

int main(){

    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    int blank_cnt = 0, tab_cnt = 0, newLine_cnt = 0; 
    int ff_cnt = 0, fl_cnt = 0, fi_cnt = 0;
    char c, prech = '\0';

    while((c = getchar()) != EOF){
        switch(c){
            case 'a' : 
            case 'A' :
                aCnt++;
                break;
            case 'e' : 
            case 'E' :
                eCnt++;
                break;
            case 'i' :
                if(prech == 'f'){
                    fi_cnt++;
                } 
            case 'I' :
                iCnt++;
                break;
            case 'o' : 
            case 'O' :
                oCnt++;
                break;
            case 'u' : 
            case 'U' :
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
            case 'f' :
                if(prech == 'f'){
                    ff_cnt++;
                }
            case 'l' :
                if(prech == 'l'){
                    fl_cnt++;
                }
           default:
                break;
        }
        prech = c;
    }

    cout << "a : " << aCnt << endl;
    cout << "e : " << eCnt << endl;
    cout << "i : " << iCnt << endl;
    cout << "o : " << oCnt << endl;
    cout << "u : " << uCnt << endl;

    cout << "blank : " << blank_cnt << endl;
    cout << "tab : " << tab_cnt << endl;
    cout << "newLine : " << newLine_cnt << endl;

    cout << "ff : " << ff_cnt << endl;
    cout << "fl : " << fl_cnt << endl;
    cout << "fi : " << fi_cnt << endl;

    return 0;
}