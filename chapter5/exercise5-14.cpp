#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){

    vector<string> svec;
    string word;
    string pre = "";
    string goal_word;
    int count = 0, max_count = 0;

    while(cin >> word){

        if(word == pre){
            count++;
            if(count > max_count){
                max_count = count;
                goal_word = word;
            }
        }else{
            count = 0;
        }

        pre = word;
    }

    if(max_count == 0){
        cout << "no duplicated word" << endl;
    }else{
        cout << goal_word << " has repeated " << max_count + 1 << " times" << endl;
    }

    return 0;
}