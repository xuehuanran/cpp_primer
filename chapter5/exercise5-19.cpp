#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){

    string str1, str2;
    string response;
    do{
        cout << "Please enter two strings : " << endl;
        cin >> str1 >> str2;
        cout << (str1 <= str2 ? str1 : str2) 
             << " is less than the other. " << "\n\n"
             << "More? Enter yes or no: ";
        cin >> response;
    } while (response == "yes");

    return 0;
}